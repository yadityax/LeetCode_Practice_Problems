class Foo {
private:
    binary_semaphore sem1{0};
    binary_semaphore sem2{0};
public:
    Foo() {
        
    }

    void first(function<void()> printFirst) {
        
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();

        sem1.release();
    }

    void second(function<void()> printSecond) {
        
        // printSecond() outputs "second". Do not change or remove this line.
        sem1.acquire();
        
        printSecond();

        sem2.release();
    }

    void third(function<void()> printThird) {
        
        // printThird() outputs "third". Do not change or remove this line.
        sem2.acquire();

        printThird();
    }
};