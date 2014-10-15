//
//alert('asdas');
jQuery(document).ready(function(){
	alert("documentload");
	jQuery("#testbutton").click(function(){
		var a = jQuery("#edit-select-member").val();
		//alert(a);
		jQuery.ajax({
			url: Drupal.settings.basePath + 'reccive_data',
			data:{
				id: a,
			},
			success:function(data){
				//alert(data);
				jQuery("#testdiv").html(data);

			}

		});

	});
	jQuery("#cprint").click(function(){
		//alert("asdasS");
		content = jQuery("#testdiv").html();
		var html = "<html><head><link rel='stylesheet' type='text/css' href='http://localhost/olms/sites/all/modules/custom/olms_custom/print_table.css' media='all' /></head><body>";
		html = html + content + "knknk</body></html>";
		//var b = html +content;
		alert(html);
		var myWindow = window.open("", "", "width=400, height=400");
		myWindow.document.write(html);
		myWindow.document.close();
	});
	jQuery("#vprint").click(function(){
		alert("asdasS");

		/*content = jQuery("#testdiv").html();
		var html = "<html><head><link rel='stylesheet' type='text/css' href='http://localhost/olms/sites/all/modules/custom/olms_custom/print_table.css' media='all' /></head><body>";
		html = html + content + "knknk</body></html>";
		//var b = html +content;
		alert(html);
		var myWindow = window.open("", "", "width=400, height=400");
		myWindow.document.write(html);
		myWindow.document.close();*/
	});


});
function test()
{
	//alert("asdd");
	var content = jQuery("#block-system-main").html();
	//var test = content.detach("input");
	//alert(content);
	//var test = jQuery("#block-system-main").filter("<table>");
	//alert(test);
	var html = "<html><head><link rel='stylesheet' type='text/css' href='http://localhost/olms/sites/all/modules/custom/olms_custom/print_table.css' media='all' /><script src='//ajax.googleapis.com/ajax/libs/jquery/2.1.1/jquery.min.js'></script><script type='text/javascript' src='http://localhost/olms/sites/all/modules/custom/olms_custom/test.js'></script></head><body>";
		html = html + content + "knknk</body></html>";
		//var b = html +content;
		alert(html);
		var myWindow = window.open("", "", "width=400, height=400");
		myWindow.document.write(html);
		myWindow.document.close();
		myWindow.print();

}