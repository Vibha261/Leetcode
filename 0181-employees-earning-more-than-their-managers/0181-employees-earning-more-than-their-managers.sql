# Write your MySQL query statement below
select name as Employee from employee e where salary > (select salary from employee emp where e.managerId = emp.id);