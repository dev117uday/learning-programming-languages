class Parent_class():

    def print_class_name(self):
        print('printing from parent_class')


class Child_class(Parent_class):

    def print_child_class(self):
        print('printing from child_class')

    def print_class_name(self):
        print('over-riding the parent_class')


uday = Child_class()
uday.print_class_name()
uday.print_child_class()
