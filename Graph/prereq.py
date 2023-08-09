def is_valid_course_order(num_courses, prerequisites, course_order):
    completed_courses = set()

    for course in course_order:
        if course in prerequisites:
            deps = prerequisites[course]
            if not all(dep in completed_courses for dep in deps):
                return False

        completed_courses.add(course)

    return True


num_courses = int(input())
prerequisites = {}
for _ in range(num_courses):
    course_data = input().split()
    course_id = course_data[0]
    dependencies = course_data[1:]

    if dependencies == ['None']:
        prerequisites[course_id] = []
    else:
        prerequisites[course_id] = dependencies

course_order = input().split()

if is_valid_course_order(num_courses, prerequisites, course_order):
    print(1)
else:
    print(0)