document.getElementById('addTaskBtn').addEventListener('click', function () {
    let input = document.getElementById('taskInput');
    let taskText = input.value.trim();

    if (taskText !== "") {
        let li = document.createElement('li');
        li.textContent = taskText;

        li.addEventListener('click', function () {
            li.classList.toggle('completed');
        });

        li.addEventListener('contextmenu', function (e) {
            e.preventDefault();
            li.remove();
        });

        document.getElementById('taskList').appendChild(li);
        input.value = "";
    }
})