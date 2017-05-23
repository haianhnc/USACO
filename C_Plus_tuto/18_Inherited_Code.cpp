class BadLengthException{
    int n;
    public:
    BadLengthException(int a){
       n = a;
    }
    int what(){
        return n;
    }
};