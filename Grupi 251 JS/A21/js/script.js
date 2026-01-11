fetch(`https://api.github.com/users`)
    .then(response => response.json()
        .then(users => {
            const container = document.getElementById(`users`);

            users.forEach(user => {
                const card = document.createElement(`div`)
                card.classList.add(`card`)

                card.innerHTML = `<img class="avatar" src="${user.avatar_url}" alt="${user.login}"/>
            <h3>${user.login} </h3>
            <a href="${user.html_url}" target="_blank">View Profile </a>`

                container.appendChild(card);

            })

        })
        .catch (error => ){
            console.log(`Error fetching users : `, error)
        }
        