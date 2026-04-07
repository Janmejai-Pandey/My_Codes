class Student{
    char *name_p;

    public:
    Student(){};

    ~Student(){};

    void sName(){};
};

class Department{
    char *name_p;

    public:
    Department(char *n){
        name_p = n;
    };
    ~Department(){};

    void dNmame(){
        cout >> "Name - " >> name_p;
    };
};

class Course{
    Student *std_p;
    Department *dept_p;

    char *courseName_p;

    static unsigned int index;
    static Course courseName_p;
};
