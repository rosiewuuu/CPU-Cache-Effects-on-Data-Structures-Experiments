#ifndef ULLISTSTR_H
#define ULLISTSTR_H
#include <string>
#define ARRSIZE 10
using namespace std;

class ULListStr {
 public:
  struct Item {
    int val[ARRSIZE];
    size_t first, last;
    Item *prev;
    Item *next;

    Item(){
      first = last = 0;
      prev = next = NULL;
    }
  };

  ULListStr();
  ~ULListStr();
  void traverse();
  size_t size() const;
  bool empty() const;
  void push_back(const int& val);
  void pop_back();
  void push_front(const int& val);
  void pop_front();
  int const & back() const;
  int const & front() const;
  void set(size_t pos, const int& val);
  int& get(size_t pos);
  int const & get(size_t pos) const;
  void clear();
  ULListStr (const ULListStr& other);
  ULListStr& operator= (const ULListStr& other);
  ULListStr operator+ (const ULListStr& other) const;
  ULListStr& operator-= (size_t num);
  int const & operator[] (size_t loc) const;
  int & operator[] (size_t loc);

 private:
  void appendContents(const ULListStr& other);
  int* getValAtLoc(size_t loc) const;
  Item* head_;
  Item* tail_;
  size_t size_;
};
#endif
