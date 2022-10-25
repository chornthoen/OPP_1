//object assignment
//1
/*
#include <iostream>
#include <iomanip>
using namespace std;
class teacher{
private:
    string name;
    float hour,rate,salary;
public:
    void setName(string);
    void setHour(float );
    void setRate(float );
    float getSalary();
    void input();
    void print();

};
void teacher::setName(string name1) {
    this->name=name1;
}
void teacher::setHour(float hour1)  {
    this->hour=hour1;
}
void teacher::setRate(float rate1) {
    this->rate=rate1;
}
float teacher::getSalary() {
    return hour*rate;
}
void teacher::input() {
    cout<<"enter name:";
    getline(cin,name);
    cout<<"enter hour:";
    cin>>hour;
    cout<<"enter rate:";
    cin>>rate;
    salary=getSalary();
    cin.sync();
}
void teacher::print() {
    cout<<left<<fixed<<setprecision(2);
    cout<<setw(12)<<name<<setw(10)<<hour<<setw(10)<<rate<<getSalary()<<endl;
}
void header(){
    cout<<left<<setw(12)<<"Name"<<setw(10)<<"Hour"<<setw(10)<<"Rate"<<"Salary(US)"<<endl;
    cout<<string(50,'-')<<endl;

}
int main() {
    teacher T1,T2,T3;
    T1.setName("Chan dara");
    T1.setHour(13.00);
    T1.setRate(20.00);

    T2=T1;
    header();
    T1.print();
    T2.print();

    cout<<"Input Obj T1"<<endl;
    T1.input();
    cout<<"Input Obj T2"<<endl;
    T2.input();
    cout<<"Input Obj T3"<<endl;
    T3.input();
    header();
    T1.print();
    T2.print();
    T3.print();

    return 0;
}
*/
//2
/*
#include <iomanip>
#include <iostream>

using namespace std;
class teacher {
private:
    string name;
    float  hour,rate,salary; // salary=hour*rate;
public:
    void setName(string);
    void setHour(float);
    void setRate(float);
    float getSalary();
    void input();
    void print();

};
void teacher::setName(string name1) {
    this->name=name1;
}
void teacher::setHour(float hour1) {
    this->hour=hour1;
}
void teacher::setRate(float rate1) {
    this->rate=rate1;
}
float teacher::getSalary() {
    return hour*rate;
}
void teacher::input() {
    cout<<"enter name:";
    getline(cin,name);
    cout<<"enter hour:";
    cin>>hour;
    cout<<"enter rate:";
    cin>>rate;
    salary=getSalary();
    cin.sync();
}
void teacher::print() {
    cout<<left<<fixed<<setprecision(2);
    cout<<setw(12)<<name<<setw(10)<<hour<<setw(12)<<rate<<getSalary()<<endl;
}
void header(){
    cout<<left<<setw(12)<<"Name"<<setw(10)<<"Hour"<<setw(10)<<"Rate"<<"Salary(US)"<<endl;
    cout<<string (45,'-')<<endl;
}
void maxSalary(teacher &max,teacher obj){
    if (max.getSalary()<obj.getSalary()){
        max=obj;
    }}
void sumSalary(float &sum,teacher obj){
    sum+=obj.getSalary();
}

int main(){
    teacher t1,t2,t3;
    t1.input();
    t2.input();
    t3.input();
    header();
    t1.print();
    t2.print();
    t3.print();


    teacher max_sl;
    max_sl=t1;
    if (max_sl.getSalary()<t2.getSalary()){
        max_sl=t2;
    }
    if (max_sl.getSalary()<t3.getSalary()){
        max_sl=t3;
    }
    cout<<"A teacher who got a highest salary "<<endl;
    header();
    max_sl.print();

    float sum=0.0;
    sum+=t1.getSalary();
    sum+=t2.getSalary();
    sum+=t3.getSalary();
    cout<<endl<<"Total overall salary = "<<sum<<endl;
    return 0;
}*/
//3 array obj
/*
#include <iostream>
#include <iomanip>

using namespace std;
class teacher{
private:
    string name;
    float hour,rate,salary;
public:
    void setName(string);
    void setHour(float );
    void setRate(float );
    float getSalary();
    void input();
    void print();
};
void teacher::setName(string name1) {
    this->name=name1;
}
void teacher::setHour(float hour1) {
    this->hour=hour1;
}
void teacher::setRate(float rate1) {
    this->rate=rate1;
}
float teacher::getSalary() {
    return hour*rate;
}
void teacher::input() {
    cout<<"enter name:";
    getline(cin,name);
    //cin.sync();

    cout<<"enter hour:";
    cin>>hour;
    cout<<"enter rate:";
    cin>>rate;
    salary=getSalary();
    cin.sync();
}
void teacher::print() {
    cout<<left<<fixed<<setprecision(2);
    cout<<setw(12)<<name<<setw(10)<<hour<<setw(10)<<rate<<getSalary()<<endl;
}
void header() {
    cout << left << setw(12) << "Name" << setw(10) << "Hour" << setw(10) << "Rate" << "Salary(US)" << endl;
    cout << string(45, '-') << endl;
}

teacher getTeacher(){
    teacher obj;
    obj.input();
    cout<<endl;
    return obj;
    string name;
    float hour,rate;
    if (cin.peek()=='\n') cin.sync();
    cout<<"enter name:";
    getline(cin,name);
    cout<<"enter hour:";
    cin>>hour;
    cout<<"enter rate:";
    cin>>rate;
    cin.sync();
    obj.setName(name);
    obj.setHour(hour);
    obj.setRate(rate);
    return obj;
}
int main(){
    teacher t1,t2,t3;
    teacher t[20];
    int n;
    t1=getTeacher();
    t2=getTeacher();
    t3=getTeacher();
    header();
    t1.print();
    t2.print();
    t3.print();
    cout<<"enter n:";
    cin>>n;
    for (int i = 0; i < n; ++i) {
        t[i]=getTeacher();
    }
    cout<<endl;
    header();
    for (int i = 0; i < n; ++i) {
        t[i].print();
    }
    cout<<endl;
    cout<<"finding max of salary "<<endl;
    teacher max_sl;
    max_sl=t[0];
    for (int i = 0; i < n; ++i) {
        if (max_sl.getSalary()<t[i].getSalary()){
            max_sl=t[i];
        }
    }
    cout<<"A teacher who got a highest salary "<<endl;
    header();
    max_sl.print();
    return 0;
}*/

/*
#include <iostream>
#include <iomanip>
using namespace std;
class teacher {
private:
    string name;
    float  hour,rate,salary; // salary=hour*rate;
public:
    void setName(string);
    void setHour(float);
    void setRate(float);
    //..
    float getSalary();
    void input();
    void print();

};
// write definition outside class teacher
void teacher::setName(string name){
    this->name=name;
}
void teacher::setHour(float hour){
    this->hour=hour;
}
void teacher::setRate(float rate){
    this->rate=rate;
}
//..
float teacher::getSalary(){
    return hour*rate;
}
void teacher::input(){
    cout <<"enter name ? "; getline(cin,name);
    cout <<"enter hour ? "; cin>>hour;
    cout <<"enter rate ? "; cin>>rate;
    salary=getSalary();     cin.sync();
}
void teacher::print(){
    cout <<left<<fixed<<setprecision(2)
         <<setw(12)<<name<<setw(10)<<hour<<setw(10)<<rate<<getSalary()<<endl;

}
void header(){
    cout <<left<<setw(12)<<"Name"<<setw(10)<<"Hour"<<setw(10)<<"Rate"
         <<"Salary(USD.)"<<endl
         <<string(45,'-') <<endl;
}
teacher getTeacher() {
    teacher obj;
    // using input() method of class
//    obj.input();
//    return obj;
    // do not use input() method of class
    string name;
    float hour,rate;
    if(cin.peek()=='\n') cin.sync();
    cout <<"enter name ? " ; getline(cin,name);
    cout <<"enter hour ? "; cin>>hour;
    cout <<"enter rate ? "; cin>>rate; cin.sync();
    obj.setName(name);
    obj.setHour(hour);
    obj.setRate(rate);
    return obj;


}
int main()
{
    teacher t1,t2,t3;
    teacher t[20];
    int n;
    t1=getTeacher();
    t2=getTeacher();
    t3=getTeacher();
    header();
    t1.print();
    t2.print();
    t3.print();

    //
    cout <<"enter n object ? ";
    cin>>n;
    cout <<"input " << n << "objects" <<endl;
    for(int i=0;i<n; ++i)
        t[i]=getTeacher();
    cout <<endl;
    //
    header();
    for(int i=0;i<n; ++i)
        t[i].print();
    cout <<endl;
    cout <<"finding max of salary .... "<<endl;
    teacher max_sl;
    max_sl=t[0]; // assign t[0] to max_sl
    for(int i=1; i<n; ++i)
        if(max_sl.getSalary()<t[i].getSalary())
            max_sl=t[i];
    cout <<"A teacher who got a highest salary "<<endl;
    header();
    max_sl.print();
    //..

}*/
/*
#include <iostream>
#include <iomanip>
using namespace std;
class teacher {
private:
    string name;
    float hour,rate,salary;
public:
    void setName(string);
    void setHour(float );
    void setRate(float );
    float getSalary();
    void input();
    void print();
};
void teacher::setName(string name1) {
    this->name=name1;
}
void teacher::setHour(float hour1) {
    this->hour=hour1;
}
void teacher::setRate(float rate1) {
    this->rate=rate1;
}
float teacher::getSalary() {
    return hour*rate;
}

void teacher::input() {
    cout<<"enter name:";
    getline(cin,name);
    cout<<"enter hour:";
    cin>>hour;
    cout<<"enter rate:";
    cin>>rate;
    salary=getSalary();
    cin.sync();
}
void header(){
    cout<<left<<setw(12)<<"Name"<<setw(10)<<"Hour"<<setw(10)<<"Rate"<<"Salary"<<endl;
    cout<<string (45,'-')<<endl;
}
void teacher::print() {
    cout<<left<<fixed<<setprecision(2);
    cout<<setw(12)<<name<<setw(10)<<hour<<setw(10)<<rate<<getSalary()<<endl;
}
void maxSalary(teacher &max,teacher obj){
    if (max.getSalary()<obj.getSalary()){
        max=obj;
    }
}
void sumSalary(float &sum,teacher obj){
    sum+=obj.getSalary();
}

int main(){
    teacher t1,t2,t3;
    cout<<"input t1..."<<endl;
    t1.input();
    cout<<"input t2..."<<endl;
    t2.input();
    cout<<"input t3..."<<endl;
    t3.input();
    header();
    t1.print();
    t2.print();
    t3.print();
    teacher max;
    max = t1;
    maxSalary(max,t2);
    maxSalary(max,t3);
    cout<<"A teacher who got a highest "<<endl;
    header();
    max.print();
    float sum=0.0;
    sumSalary(sum,t1);
    sumSalary(sum,t2);
    sumSalary(sum,t3);
    cout<<"Total salary="<<sum<<endl;

}
*/
//default constructor
/*
#include <iostream>
#include <iomanip>
using namespace std;
class Student{
private:
    string name;
    char sex;
    float average;
public:
    Student(){
        cout<<"Hello World!"<<endl;
    }
    void print(){
        cout<<left<<fixed<<setprecision(2)<<setw(12)<<name<<setw(10)<<sex<<average<<endl;
    }
    void input(){
        cout<<"enter name:";
        getline(cin,name);
        cout<<"enter sex:";
        cin>>sex;
        cout<<"enter average:";
        cin>>average;
        cin.sync();
    }

};
void header(){
    cout<<left<<setw(12)<<"Name"<<setw(10)<<"Sex"<<setw(10)<<"Average"<<endl;
    cout<<string (30,'-')<<endl;
}
int main(){
    Student s1;
    s1.input();
    header();
    s1.print();
    int n=3;
    Student st[n];
    for (int i = 0; i < n; ++i) {
        st[i].input();
    }
    cout<<endl;
    header();
    for (int i = 0; i <n; ++i) {
        st[i].print();
    }
    cout<<endl;
}*/
//constructor parameter
/*
#include <iostream>
#include <iomanip>
using namespace std;
class point{
private:
    int x,y;
public:
    point();
    point(int);
    point(int ,int );
    void print();
};
point::point() {
   cout<<"constructor point()"<<endl;
   x=y=0;
}
point::point(int xx) {
    cout<<"constructor point(int)"<<endl;
    x=xx,y=0;
}
point::point(int xx,int yy) {
    cout<<"constructor point(int,int)"<<endl;
    x=xx,y=yy;
}

void point::print() {
    cout<<"x = "<<x<<" ,y = "<<y<<endl;
}
int main(){
    point p1,p2(3),p3(4,5);
    p1.print();
    p2.print();
    p3.print();
    point p[5]={{2},{},{},{4,5},{7}};
    for (int i = 0; i < 5; ++i) {
        p[i].print();
    }
    cout<<endl;
}*/
//we create class point with a constructor has default parameter
/*
#include <iostream>
#include <iomanip>
using namespace std;
class point{
private:
    int x,y,z;
public:
    point(int xx=0,int yy=0,int zz=0){
        x=yy;
        y=yy;
        z=zz;
    }
    int getx(){
        return x;
    }
    int gety(){
        return y;
    }
    int getz(){
        return z;
    }
    void input(){
        cout<<"enter x:";
        cin>>x;
        cout<<"enter y:";
        cin>>y;
        cout<<"enter z:";
        cin>>z;
    }
    void print(){
        cout<<"x = "<<x<<",y = "<<y<<" ,z = "<<z<<endl;
    }
};
void header(){
    cout<<string (20,'-')<<endl;
}
int main(){
    point p1,p2;
    p1.input();
    p2.input();
    header();
    p1.print();
    p2.print();


    cout <<"/////////////////////////"<<endl;
    int n=5;
    point p[5]={{2,3},{4},{},{},{6}};
    for(int i=0;i<n; ++i)
        p[i].print();
    cout <<endl;
    cout <<"input new data for default ..." <<endl;
    for(int i=0;i<n; ++i){
        if(p[i].getx()==0 && p[i].gety()==0){
            cout <<"input new data for p#"<<i <<endl;
            p[i].input();
        }
        cout <<endl;
    }
    for(int i=0;i<n; ++i)
        p[i].print();
    cout <<endl;
}
*/
//ex2. we have a class student

#include <iostream>
#include <iomanip>
#include <cstring> // strcpy
#include <cctype> // toupper
using namespace std;
class student {
private:
    char name[20],sex, grade;
    float average;
public:
    student(); // default constructor
    //student (const char name[],char sex, float average );
    char getGrade();
    void print();
    void input();

};
student::student() {
    strcpy(this->name,"unknown");
    this->sex='M';
    this->average=110.0;
    this->grade=getGrade();
}
//student::student(const char name[], char sex, float average){
//    //cout <<"calling student(char *, char , float )...."<<endl;
//    strcpy(this->name,name);
//    this->sex=sex;
//    this->average=average;
//    this->grade=getGrade();
//    //this->input();
//}
char student::getGrade() {
    char gr;
    if(average>=95.00)      gr='a';
    else if(average>=85.00) gr='b';
    else if(average>=75.00) gr='c';
    else if(average>=65.00) gr='d';
    else if(average>50.00)  gr='e';
    else gr='f';
    return toupper(gr);
}
void student::input() {
    cout<<"enter name:";
    cin.getline(name,20,'\n');
    cout<<"enter sex:";
    cin>>sex;
    cout<<"enter average:";
    cin>>average;
    cin.sync();
}
void student::print() {
    cout <<left<<fixed<<setprecision(2)
         <<setw(12)<<name <<setw(10)<<sex<<setw(10)<<average
         << getGrade() <<endl;
}
void header(){
    cout<<left<<setw(12)<<"Name"<<setw(10)<<"Sex"<<setw(10)<<"Average"<<"Grade"<<endl;
    cout<<string(40,'-')<<endl;
}
int main(){
    student s1,s2;
    header();
    s1.print();
    s2.input();
    header();
    s2.print();
    int n =3;
    student s[n];
    for (int i = 0; i < n; ++i) {
        s[i].input();
    }
    cout<<endl;
    header();
    for (int i = 0; i < n; ++i) {
        s[i].print();
    }
    cout<<endl;

}




