class Box{
  int l,b,h;
  
  // Constructor
public:
  Box(){
    l = 0;
    b = 0;
    h = 0;
  }
  Box(int length, int breadth, int height){
    l = length;
    b = breadth;
    h = height;
  }
  Box(const Box &B){
    l = B.l;
    b = B.b;
    h = B.h;
  }
  
  // Functions
  int getLength(){
    return l;
  }
  int getBreadth(){
    return b;
  }
  int getHeight(){
    return h;
  }
  long long CalculateVolume(){
    return 1LL*l*b*h;
  }
  bool operator<(Box& B){
    if((l < B.getLength()) || (l == B.getLength() && b < B.getBreadth()) || (l == B.getLength() && b == B.getBreadth() && h < B.getHeight()))
      return true;
    else
      return false;
  }
  
  friend ostream &operator<<( ostream &output,Box D)
  { 
     output << D.getLength()<<" " <<D.getBreadth() << " " << D.getHeight();
     return output;            
  }
};