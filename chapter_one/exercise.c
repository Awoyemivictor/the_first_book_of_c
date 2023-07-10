// 1. Valid function names
m1234()
power()
add_5()
new_balance()
new_bal()
abs_val()
taxes()
a2b3c4d5()
abcd()
invoices()
net_pay()
salestax()
A12345()
amount()

// 2. old_bal(), sold(), new_bal(), report()
// a. Write a C program that calls these functions in the order that they are listed.
old_bal() {

}

sold() {

}

new_bal() {

}

report() {

}

int main() {
    old_bal();
    sold();
    new_bal();
    report();
}

// b. From the functions' names, what do you think each function might do?
// old_bal() - the function will check for the old balance in the store
// sold() - the function will sell the store item
// new_bal() - the function will check the new balance in the store
// report() - the function will give us the report of the store

// 3. input(), salestax(), balance(), calcbill()
// a. Write a C program that calls these functions in the order that they are listed.
int main() {
    input();
    salestax();
    balance();
    calcbill();
}

// b. From the functions' name, what do you think each function might do?
// input() - the function will input product data
// salestax() - the function will calculate the total number of salestax
// balance() - the function will check for the balance
// calculatebill() - the function will calculate bill

// 4. Determine names for functions that do the following:
max_val() {

}

min_val() {

}

low2Up() {

}

up2low() {

}

num_sort() {

}

alpha_names() {

}

// 5. You're given the job of preparing a complete mel for five people next weekend. Determine the major tasks that must be handled to accomplish this. 
// (Hint: One task, not necessarily the first one is "Buy the food.")
go to market
buy rice and ingredients
go back home
wait till next weekend
wake up saturday morning
wash kitchen utensils
grind pepper
put oil inside pot
pour pepper and all necessary ingredients
pour water
wash rice and pour it inside
add other ingredients
wait till rice is done
serve it

// 6. You're a sophomone in college and are planning to go to law school when you graduate. List the major objectives that you must fulfill to meet this goal. (Hint: One objecive is "Take the right courses")
Take the right courses
finish school and graduate
apply for law school
write exam or test
wait for admission

// 7. You're a given the job of planting a vegetable garden. Determine the major tasks that must be handled to accomplish this. (Hint: One task is "Plan the garden")
1. Plan the garden
2. Get a garden
3. Get the necessary vegetables
4. Plant the vegetables
5. Keep watering the vegetables daily
6. Add manure or fertilizer
7. Wait till the vegetable grows

// 8. You are responsible for planning and arranging tbe family camping trip this summer. List the major tasks that must be accomplished to meet this objective successfully. 
// (Hint: One task is "Select the camp site")
1. Select the camp site
2. Select the food for the trip
3. Select the gadgets and equipments to use

// 9a. A wall street investment firm desireds a computer system to keep track of all stock trades made during the year. The sytem must, of course, be capable of accepting and storing
// all the trades. Additionally, the company wants the capability to retrieve and output a printed report listing all trades meeting certain criteria; for example, all trades made in a 
// particular month witha. net value of more than a given dollar amount, all trades made ina year with a particular client, or all trades made with firms in a particular state. For this
// sytem determine three or four major modules into which the system could be separated. (Hint: One module is "Input trades" to accept each day's trades.)
input_trades() {

}
output_all_trades_month() {

}

output_all_trades_year() {

}

all_trades_per_firm_yearly() {

}

all_trades_per_firm_state() {

}

// b. Suppose someone enters incorrect data about a trade, which is discovered after the trade has been entered and stored by the system. What module is needed to take care of correcting
// this problem? Discuss why such a module might or might not be required by most business systems.
input_error_correct() {
    // the business sytem will require this type of module in order for them to be able to easily make corrections to the incorrect data someone mistakenly entered about a trade
}

// c. Assume a module exists that allows a user to alter or change data that has been incorrectly entered and stored. Discuss the need for including an "audit trail" that would allow for
// a later reconstruction of the changes made, when they were made, and who made them.

// So the "audit trail" will enable to the company to easily track the person that incorrectly input the wrong data and how many errors/mistakes the person keeps making in order for the
// company to know employees that should fit in rightly into such a position
