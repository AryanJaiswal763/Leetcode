# Write your MySQL query statement below
select s.machine_id,
round(avg(e.timestamp-s.timestamp),3) as processing_time
from activity as s
join activity as e
on s.machine_id=e.machine_id
where s.process_id=e.process_id
and s.activity_type='start'
and e.activity_type='end'
group by s.machine_id