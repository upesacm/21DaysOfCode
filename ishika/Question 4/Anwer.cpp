class Person {
public:
  string name;
  int age;
  virtual void getdata() {}
  virtual void putdata() {}
};

class Professor : public Person {
  int cur_id;
  int publications;
public:
  static int cnt;
  Professor() {}
  void getdata() {
    cur_id = ++cnt;
    cin >> name >> age >> publications;
  }
  void putdata() {
    cout << name << ' ' << age << ' ' << publications << ' ' << cur_id << endl;
  }
};

int Professor::cnt = 0;

class Student : public Person {
  int cur_id;
  vector<int> marks;
public:
  static int cnt;
  Student() {}
  void getdata() {
    cur_id = ++cnt;
    cin >> name >> age;
    marks.resize(6);
    for (int i = 0; i < 6; ++i)
      cin >> marks[i];
  }
  void putdata() {
    int sum = 0;
    for (int i = 0; i < (int)marks.size(); ++i)
      sum += marks[i];
    cout << name << ' ' << age << ' ' << sum << ' ' << cur_id << endl;
  }
};

int Student::cnt = 0;
