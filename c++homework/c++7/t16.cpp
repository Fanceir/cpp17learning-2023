#include<bits/stdc++.h>
using namespace std;
class Box{
    private:
    double length{0};
    double width{0};
    double height{0};
    static inline size_t objectCount{0};
    public:
    Box(double lv,double wv,double hv);
    Box(double side);
    Box();
    Box(const Box& box);
    Box(const Box&& box);
    Box& operator=(const Box& box);
    double volume() const;
    size_t getObjectCount() const;
    };
    Box::Box(double lv,double wv,double hv):length{lv},width{wv},height{hv}{
        ++objectCount;
    }
    Box::Box(double side):length{side},width{side},height{side}{
        ++objectCount;
    }
    Box::Box():length{1.0},width{1.0},height{1.0}{
        ++objectCount;
    }
    Box::Box(const Box& box):length{box.length},width{box.width},height{box.height}{
        ++objectCount;
    }
    Box::Box(const Box&& box):length{box.length},width{box.width},height{box.height}{
        ++objectCount;
    }
    Box& Box::operator=(const Box& box){
        if(this!=&box){
            length=box.length;
            width=box.width;
            height=box.height;
        }
        return *this;
    }
    double Box::volume() const{
        return length*width*height;
    }
    size_t Box::getObjectCount() const{
        return objectCount;
    }
    int main(){
        Box box1{2.4,7.1,5.0};
        Box box2{box1};
        Box box3;
        box3=box1;
        cout<<"box1的体积为："<<box1.volume()<<endl;
        cout<<"box2的体积为："<<box2.volume()<<endl;
        cout<<"box3的体积为："<<box3.volume()<<endl;
        cout<<"Box对象的个数为："<<box1.getObjectCount()<<endl;
        return 0;
    }