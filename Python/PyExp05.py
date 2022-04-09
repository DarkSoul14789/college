#Q1)  
'''
Create a class for final_bill which will show the bill_amount to be paid
by adding the bill_amount of first_bill by making use of overriding superclass contructors and methods.
(i.e. Superclass:First_bill  Subclass: Final_bill)
'''


class First_bill:
    def __init__(self,amount):
        self.amount=amount
        
class Final_bill(First_bill):
    def __init__(self, amount, famount):
        super().__init__(amount)
        self.famount = famount
    def calculateBill(self):
        return self.famount+self.amount
        
b = Final_bill(500,250)
print(b.calculateBill())


#Q2)
'''
Create a class Indian_people with attributes population, avg_income.
Create another class Indian_nature with attributes geographical_area, num_of_trees.
Create an inherited class India from Indian_people and Indian_nature with additional attributes
'''

class Indian_people:
    def __init__(self,population,avg_income):
        self.population=population
        self.avg_income=avg_income
        
class Indian_nature:
    def __init__(self,geographical_area,num_of_trees):
        self.geographical_area=geographical_area
        self.num_of_trees=num_of_trees
        
class India(Indian_people,Indian_nature):
    def __init__(self,population,avg_income,geographical_area,num_of_trees,num_of_languages,num_of_dishes):
        Indian_people.__init__(population,avg_income)
        Indian_nature.__init__(geographical_area,num_of_trees)
        self.num_of_languages=num_of_languages
        self.num_of_dishes=num_of_dishes
        
#Q3)
'''Show example of polymorphism in which,
a method from two different classes is called via one common method by passing object as input to method,
also show another method showing different variables of two different classes by taking their object as input.
'''

