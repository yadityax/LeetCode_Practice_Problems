class FooBar {
private:
    int n;
    binary_semaphore fooSem{1};
    binary_semaphore barSem{0};

public:
    FooBar(int n) {
        this->n = n;
    }

    void foo(function<void()> printFoo) {
        
        for (int i = 0; i < n; i++) {
            
        	// printFoo() outputs "foo". Do not change or remove this line.
        	fooSem.acquire();
            
            printFoo();

            barSem.release();
        }
    }

    void bar(function<void()> printBar) {
        
        for (int i = 0; i < n; i++) {
            
        	// printBar() outputs "bar". Do not change or remove this line.
        	barSem.acquire();

            printBar();

            fooSem.release();
        }
    }
};