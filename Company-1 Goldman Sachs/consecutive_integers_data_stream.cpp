class DataStream {
public:
int K, Value, size = 0;
    DataStream(int value, int k) {
        K = k;
        Value = value;
        size = 0;
    }
    bool consec(int num) {
        if(num != Value){
            size = 0;
            return false;
        }
        size++;
        if(size < K){
            return false;
        }
        return true;
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */