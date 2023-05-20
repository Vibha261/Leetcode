# Write your MySQL query statement below
SELECT dep.name AS Department, emp.name AS Employee, emp.salary AS Salary FROM Employee emp JOIN Department dep ON emp.departmentId = dep.id WHERE (emp.departmentId, emp.salary) IN (SELECT departmentId, MAX(salary) FROM Employee GROUP BY departmentId);