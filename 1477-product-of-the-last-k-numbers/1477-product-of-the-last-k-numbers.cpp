class ProductOfNumbers {
public:
    vector<int> list;
    int prod = 1;

    ProductOfNumbers() {}

    void add(int num) {
        if (num == 0) {
            list.clear();
            prod = 1;
        } else {
            prod *= num;
            list.push_back(prod);
        }
    }

    int getProduct(int k) {
        if (list.size() < k) return 0;
        if (list.size() == k) return list.back();
        return list.back() / list[list.size() - k - 1];
    }
};
/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */