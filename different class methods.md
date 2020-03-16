# Normal method
普通的member function,只有object可以调用

# Static method
静态function, object和class name都可以调用，但是function内部实现不能用到member variable，只能用到static variable(class variable)

# Const method （read-only method）
不能改变但可以调用member variable的function，如果里面的代码会改变member variable就会报错。适用于getter类的function

# Friend method 
不属于class 的member function，但可以调用private member variable
