# Write your MySQL query statement below
Select Customers.name as Customers from customers where customers.id not in(select orders.customerId from orders where orders.customerId=customers.id); 