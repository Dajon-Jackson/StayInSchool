//Student.h
lass Student {
    public:
       Student(string initialName = "No Name") {
             name = initialName;
       }

       virtual void ToStr(){
            cout << name << " is undergraduate student" << endl;
       }

    protected:
      string name;
};
