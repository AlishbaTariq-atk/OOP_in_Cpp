#include<iostream>
#include<string>
using namespace std;
struct StudentData
{
   string name;
   int marks[3];
};
void Display(StudentData student[]);
void Calc_Average_Marks(StudentData*  ,int );
void Change_marks(StudentData* ,int );

int main(){
  StudentData student[2];
  int option;
  int student_no;

  for(int i=0;i<2;i++){
    cout<<"Enter student "<<i+1<<" name: :"<<endl;
   getchar();
   getline(cin,student[i].name);
    for(int j=0;j<3;j++){
        cout<<"Enter student marks for course: "<<j+1<<endl;
        cin>>student[i].marks[j];
    }
    //getchar();
  }
  while(1){
  cout<<"Menu: "<<endl<<"1.Display Student Data"<<endl<<"2.Calculate Average Marks"<<endl<<"3.Change Marks"<<endl<<"4.Exit"<<endl;
  cin>>option;
  if(option==1){
    Display(student);
  }
  else if(option==2){
    cout<<"Enter student no: "<<endl;
    cin>>student_no;
    Calc_Average_Marks(student,student_no);
  }
  else if(option==3){
   cout<<"Enter student no.: "<<endl;
   cin>>student_no;
    Change_marks(student,student_no);
  }
  else
    return 0;
  }
}
void Display(StudentData student[]){
  for(int i=0;i<2;i++){
    cout<<"Student Name: "<<student[i].name<<endl;
    for(int j=0;j<3;j++){
        cout<<"student marks for course: "<<j+1<<" : "<<student[i].marks[j]<<endl;
    }
  }

}
void Calc_Average_Marks(StudentData *student,int student_no){
    
    int avg=0;
   for(int i=0;i<3;i++){
    avg+=student[student_no-1].marks[i];
   }
   avg/=3.0;
   cout<<"Average= "<<avg<<endl;

}
void Change_marks(StudentData *student,int student_no){
  int course_no,updated_marks;
  cout<<"Enter course no.: "<<endl;
  cin>>course_no;
  cout<<"Enter the updated marks: "<<endl;
  cin>>updated_marks;
  student[student_no-1].marks[course_no-1]=updated_marks;


}