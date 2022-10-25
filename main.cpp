
/*
#include <iostream>
using namespace std;
class person{
public:
    int id;
    string name;
    string addr;
};
int main(){
    person p1 , p2;
    p1.id=110;
    p1.name="chan dara";
    p1.addr="p.penh";
    p2.id=111;
    p2.name="sok heng";
    p2.addr="battambong";
    cout<<"person p1...."<<endl;
    cout<<p1.id<<endl;
    cout<<p1.name<<endl;
    cout<<p1.addr<<endl;
    cout<<"person p2...."<<endl;
    cout<<p2.id<<endl;
    cout<<p2.name<<endl;
    cout<<p2.addr<<endl;
    return 0;
}*/
/*
#include <iostream>
using namespace std;
class Person{
private:
    int id;
    string name;
    string address;
public:
    void setId(int value){
        id = value;
    }

    int getId(){
        return id;
    }
    void setName(string value){
        name = value;
    }
    string getName(){
        return name;
    }
    void setaddress(string value){
        address = value;
    }
    string getaddress(){
        return address;
    }

};
int main(){
    Person p1;
    p1.setId(100);
    p1.setName("chan dara");
    p1.setaddress("p.penh");
    cout<<p1.getId()<<endl;
    cout<<p1.getName()<<endl;
    cout<<p1.getaddress()<<endl;
    return 0;
}
*/
/*
#include <iostream>
using namespace std;
class Numbers{
private:
    int x;
protected:
    int y;
public:
    int z;
    // create function to use private and protected members
    // set function to write data to private or protected
    // write x
    void setX(int xx){
        x=xx;
    }
    // write y
    void setY(int yy) {
        y=yy;
    }
    // read x
    int getx() {
        return x;
    }
    // read y
    int gety() {
        return y;
    }
    void input() {
        cout <<"enter x ? "; cin>>x;
        cout <<"enter y ? "; cin>>y;
        cout <<"enter z ? "; cin>>z;
    }
    void print()
    {
        cout <<"x=" <<x <<",y="<<y<<",z="<<z <<endl;

    }
};

int main()
{
    Numbers n1,n2;
// memory storage n1[x|y|z]
// memory storage n2[x|y|z]

    cout <<"size of n1=" << sizeof(n1) <<" bytes "<<endl;
    cout <<"size of n2=" << sizeof(n2) <<" bytes " <<endl;
// set value to x, y and z by object n1


    n1.setX(10);
    n1.setY(20);
    n1.z=30;
// memory storage n1[x=10|y=20|z=30]
// set value to x, y and z by object n2

    n2.setX(1);
    n2.setY(2);
    n2.z=3;
// memory storage n2[x=1|y=2|z=3]

    cout <<"print object n1" <<endl;
    cout <<"x=" <<n1.getx() <<",y="<<n1.gety() <<",z="<<n1.z <<endl;
    cout <<"print object n2" <<endl;
    cout <<"x=" <<n2.getx() <<",y="<<n2.gety() <<",z="<<n2.z <<endl;
    cout <<"input n1" <<endl;
    n1.input();
    cout <<"input n2" <<endl;
    n2.input();
    cout <<"print object n1" <<endl;
    cout <<"x=" <<n1.getx() <<",y="<<n1.gety() <<",z="<<n1.z <<endl;
    cout <<"print object n2" <<endl;
    cout <<"x=" <<n2.getx() <<",y="<<n2.gety() <<",z="<<n2.z <<endl;


}*/
#include <iostream>
#include <iomanip>
using namespace std;
class teacher{
private:
    string name;
    float h,rate,salary;
public:
    void setName(string);
    void setH(float );
    void setRate(float );
    string getName();
    float getH();
    float getRate();
    float getSalary();
    void read();
    void write();
};
void teacher::setName(string name1 ) {
    this->name=name1;
}
string teacher::getName() {
    return name;
}
void teacher::setH(float h1) {
    this->h=h1;
}
float teacher::getH() {
    return h;
}
void teacher::setRate(float rate1) {
    this->rate=rate1;
}
float teacher::getRate() {
    return rate;
}
float teacher::getSalary() {
    return h*rate;
}
void teacher::read(){
    cout <<"enter name ? "	;
    getline(cin,name);
    cout <<"enter hour ? ";
    cin>>h;
    cout <<"enter rate ? ";
    cin>>rate; cin.sync();
    salary=getSalary();
}

void teacher::write() {
    cout<<left<<fixed<<setprecision(2);
    salary=getSalary();
    cout<<setw(12)<<name<<setw(10)<<h<<setw(10)<<rate<<salary<<endl;
}
int main(){
    teacher t1,t2;
    t1.setName("chan dara");
    t1.setH(100.00);
    t1.setRate(12.00);

    t2.setName("heng heng");
    t2.setH(200.00);
    t2.setRate(50.00);
    t1.write();
    t2.write();
    t1.read();
    t1.write();
}



