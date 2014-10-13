//
jQuery(document).ready(function(){

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


});