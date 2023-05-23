# Write your MySQL query statement below
select a.id from weather a join weather b on a.recordDate = DATE_ADD(b.recordDate, INTERVAL 1 DAY) and a.temperature > b.temperature;