/* ================= FETCH PRODUCTS ================= */

let allProducts = [];

async function fetchProduct() {
    try {
        const res = await fetch("https://dummyjson.com/products");
        const data = await res.json();

        allProducts = data.products;

        ProductContainer(allProducts);

    } catch (error) {
        console.log("Error:", error);
    }
}


/* ================= SEARCH & SORT ================= */

let searchInput = document.getElementById("search-input");
let sortSelect = document.getElementById("sort-select");

if (searchInput) {
    searchInput.addEventListener("input", filterProducts);
}

if (sortSelect) {
    sortSelect.addEventListener("change", filterProducts);
}


/* ================= FILTER PRODUCTS ================= */

function filterProducts() {

    let query = (searchInput?.value || "").toLowerCase();

    let sort = sortSelect?.value || "default";

    let filtered = allProducts.filter(p =>
        p.title.toLowerCase().includes(query) ||
        p.category.toLowerCase().includes(query) ||
        p.description.toLowerCase().includes(query)
    );


    /* ===== SORTING ===== */

    if (sort === "low") {
        filtered.sort((a, b) => a.price - b.price);
    }

    if (sort === "high") {
        filtered.sort((a, b) => b.price - a.price);
    }

    if (sort === "name") {
        filtered.sort((a, b) => a.title.localeCompare(b.title));
    }

    ProductContainer(filtered);
}


/* ================= DISPLAY PRODUCTS ================= */

function ProductContainer(products) {

    let AllProductItem = document.getElementById("products");
    let noresult = document.getElementById("no-result");

    if (!AllProductItem) return;

    /* CLEAR OLD PRODUCTS */
    AllProductItem.innerHTML = "";

    if (products.length === 0) {

        if (noresult) noresult.style.display = "block";

        return;
    }

    if (noresult) noresult.style.display = "none";


    products.forEach((p) => {

        AllProductItem.innerHTML += `
            <div class="card m-2" style="width: 18rem;">
                <img src="${p.images[0]}" class="card-img-top" alt="${p.title}">

                <div class="card-body">
                    <h5 class="card-title">${p.title}</h5>

                    <p class="card-text text-truncate">
                        ${p.description}
                    </p>

                    <p><strong>$${p.price}</strong></p>

                    <button 
                        class="btn btn-primary"
                        onclick="addToCart(${p.id})"
                    >
                        Add To Cart
                    </button>
                </div>
            </div>
        `;
    });
}


/* ================= ADD TO CART ================= */

function addToCart(id) {

    let cart = JSON.parse(localStorage.getItem("cart")) || [];

    let product = allProducts.find(p => p.id === id);

    if (!product) return;

    cart.push(product);

    localStorage.setItem("cart", JSON.stringify(cart));

    alert("Item added to cart");
}


/* ================= INITIAL LOAD ================= */

fetchProduct();