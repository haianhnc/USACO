// Write your Student class here
class Student{
  int scores[5];
  public:
  void input(){
    for(int i=0; i< 5;i++){
      cin >> scores[i];
    }
  }
  int calculateTotalScore(){
    return scores[0] + scores[1] + scores[2] + scores[3] + scores[4];
  }
};