int student_id = 1;
int professor_id = 1;
class Person{
    public:
    string name;
    int age;
    virtual void getdata(){}
    virtual void putdata(){}
};

class Professor: public Person{
    public:
    int publications;
    int cur_id;
    
    Professor(){
        cur_id = professor_id;
        professor_id++;
    }
    
    void getdata(){
        cin >> name;
        cin >> age;
        cin >> publications;
    }
    void putdata(){
        printf("%s %d %d %d\n", name.c_str(), age, publications, cur_id);
    }
};

class Student: public Person{
    public:
    int marks[6];
    int cur_id;
    
    Student(){
        cur_id = student_id;
        student_id++;
    }
    
    void getdata(){
        cin >> name;
        cin >> age;
        for(int i=0; i<6; i++){
            cin >> marks[i];
        }
    }
    void putdata(){
        printf("%s %d %d %d\n", name.c_str(), age, marks[0] + marks[1] + marks[2] + marks[3] + marks[4] + marks[5], cur_id);
    }
};