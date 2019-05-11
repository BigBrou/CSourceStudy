#ifndef CHAPTER4_AAA_H
#define CHAPTER4_AAA_H


class AAA {
private:
    int num;
private:
    AAA (int n);
public:
    AAA ();
    AAA &CreateInitObj(int n) const;
    void ShowNum();
};


#endif //CHAPTER4_AAA_H
