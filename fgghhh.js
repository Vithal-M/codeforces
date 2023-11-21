 bjvkkkhvvdocument.addEventListener('DOMContentLoaded', () => {
    const getDataBtn = document.getElementById('getDataBtn');
    const outputDiv = document.getElementById('output');

    getDataBtn.addEventListener('click', () => {
        // Fetch data from the JSONPlaceholder API
        fetch('https://jsonplaceholder.typicode.com/posts/1')
            .then(response => response.json())
            .then(data => {
                // Display the data in the output div
                outputDiv.innerHTML = `
                    <h2>Data from API:</h2>
                    <p><strong>Title:</strong> ${data.title}</p>
                    <p><strong>Body:</strong> ${data.body}</p>
                `;
            })
            .catch(error => {
                console.error('Error fetching data:', error);
                outputDiv.innerHTML = '<p>Error fetching data from API</p>';
            });
    });
});
