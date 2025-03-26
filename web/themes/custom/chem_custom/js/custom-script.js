$(function(){
    $(window).on("scroll", function () {
        let header = $("header");
        let inputGroup = $(".input-group"); // Select input-group
        if ($(this).scrollTop() > 50) {
            header.addClass("sticky");
            inputGroup.hide();
        } else {
            header.removeClass("sticky");
            inputGroup.show();
        }
    });    
});

$('.research-slider').owlCarousel({
    loop:true,
    margin:40,
    nav:true,
    dots:false,
    responsive:{
        0:{
            items:1
        },
        600:{
            items:2
        },
        1000:{
            items:3
        }
    }
})


$('.feedback-slider').owlCarousel({
    loop:true,
    margin:40,
    nav:false,
    
    responsive:{
        0:{
            items:1
        },
        600:{
            items:2
        },
        1000:{
            items:2
        }
    }
})

