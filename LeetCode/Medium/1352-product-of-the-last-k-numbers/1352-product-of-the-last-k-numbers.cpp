class ProductOfNumbers {
public:
    vector<int> nums{1};
    ProductOfNumbers() {
    }
    void add(int num) {
        if(!num)
            nums = {1};
        else nums.push_back(*(nums.end()-1)*num);
    }
    int getProduct(int k) {
        int n = nums.size();
        if(k>=n)
            return 0;
        return nums[n-1] / nums[n-k-1];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */