document.addEventListener("DOMContentLoaded", DisplayCart);

export function DisplayCart() {

    let cart = JSON.parse(localStorage.getItem("cart")) || [];

    console.log(cart);


    let container = document.getElementById("cart")

    let total = 0;

    if (cart.lenght === 0) {
        container.innerHTML = "<h3>Cart is Empty</h3>"
        document.getElementById("total").innerText = ""
        return;
    }

    // container.innerHTML = "";

    cart.forEach((item, index) => {
        total += item.price

        container.innerHTML += `
            
            <tr>
                <td>{index}</td>
                <td><img src=${item.images} alt="image"/></td>
                <td><h2>${item.title}</h2></td>
                <td><p>${item.price}</p></td>
                <td><span>${item.quantity}</span></td>
                <td>
                    <button>Delete</button>
                </td>
            </tr>
            
            
            `
    })
}