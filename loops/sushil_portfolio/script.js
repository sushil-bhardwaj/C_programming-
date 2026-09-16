/* ================= EDUCATION CAROUSELS ================= */

const carousels = document.querySelectorAll(".carousel");


carousels.forEach((carousel) => {

    const track = carousel.querySelector(".carousel-track");

    const slides = carousel.querySelectorAll("img");

    const previousButton = carousel.querySelector(".prev");

    const nextButton = carousel.querySelector(".next");

    const dots = carousel.querySelectorAll(".dot");


    let currentSlide = 0;


    function showSlide(index) {

        if (index < 0) {
            currentSlide = slides.length - 1;
        }

        else if (index >= slides.length) {
            currentSlide = 0;
        }

        else {
            currentSlide = index;
        }


        track.style.transform =
            `translateX(-${currentSlide * 100}%)`;


        dots.forEach((dot, dotIndex) => {

            dot.classList.toggle(
                "active",
                dotIndex === currentSlide
            );

        });

    }


    nextButton.addEventListener("click", () => {

        showSlide(currentSlide + 1);

    });


    previousButton.addEventListener("click", () => {

        showSlide(currentSlide - 1);

    });


    dots.forEach((dot, dotIndex) => {

        dot.addEventListener("click", () => {

            showSlide(dotIndex);

        });

    });



    /* ================= TOUCH SWIPE ================= */

    let touchStartX = 0;

    let touchEndX = 0;


    carousel.addEventListener("touchstart", (event) => {

        touchStartX = event.changedTouches[0].screenX;

    });


    carousel.addEventListener("touchend", (event) => {

        touchEndX = event.changedTouches[0].screenX;

        handleSwipe();

    });


    function handleSwipe() {

        const difference =
            touchStartX - touchEndX;


        if (Math.abs(difference) < 50) {
            return;
        }


        if (difference > 0) {

            showSlide(currentSlide + 1);

        }

        else {

            showSlide(currentSlide - 1);

        }

    }


    showSlide(0);

});


/* ================= CONSOLE ================= */

console.log(
    "Welcome to Sushil Bhardwaj's portfolio."
);