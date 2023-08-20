    #include "./ColorCodes/Color.hpp"
    
    template <typename T> class Stack{
        private :
            T* arr;
            int size=5;
            int index=-1;
        public :
            Stack();
            ~Stack();

            void adding(T,T);


            void push();

            void pop();

            void peek();

            bool isEmpty();

            bool isFull();

            void display();

    };
