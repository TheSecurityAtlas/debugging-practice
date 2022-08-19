
// nice
function change_to_visible(component){
  var x = document.getElementById(component);
  if(x.classList.contains("clicked")){
    x.style.visibility = 'hidden';
    x.classList.remove('clicked')
  }
  else {
    x.style.visibility = 'visible';
    x.classList.add("clicked")
  }
}