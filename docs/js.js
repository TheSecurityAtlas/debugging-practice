
// nice
function change_to_visible(component){
  var x = document.getElementById(component);
  if(x.style.visibility == 'hidden')
    x.style.visibility = 'visible';
  else
    x.style.visibility = 'hidden';
}