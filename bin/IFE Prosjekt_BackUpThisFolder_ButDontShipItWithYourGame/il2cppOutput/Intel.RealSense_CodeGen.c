#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void Intel.RealSense.ContextHandle::.ctor()
extern void ContextHandle__ctor_m233DDCA29366F2BECBF9DFF737ACB4EE3A2C3D71 (void);
// 0x00000002 System.Boolean Intel.RealSense.ContextHandle::ReleaseHandle()
extern void ContextHandle_ReleaseHandle_mDDEA9B2C3E424DBFE098CB250D5A437A0A605341 (void);
// 0x00000003 System.Void Intel.RealSense.Context::.cctor()
extern void Context__cctor_m040D470E120C39BF8F0A1AFD9F09B9D3C1419A01 (void);
// 0x00000004 System.Void Intel.RealSense.Context::.ctor()
extern void Context__ctor_m833D3312D73B2D956F3142714C1EB4CB7738A34A (void);
// 0x00000005 Intel.RealSense.ContextHandle Intel.RealSense.Context::get_Handle()
extern void Context_get_Handle_mE75F7A9639FAF5150A5324FAB8345C6E170CFA3D (void);
// 0x00000006 System.String Intel.RealSense.Context::get_Version()
extern void Context_get_Version_mE03FFAA5CCCF967EBBC469A090D9B47D433282BA (void);
// 0x00000007 System.Void Intel.RealSense.Context::add_OnDevicesChangedEvent(Intel.RealSense.Context/OnDevicesChangedDelegate)
extern void Context_add_OnDevicesChangedEvent_mEA4D0DC321AD71B9E463B62DDF3581E07E9BD9D7 (void);
// 0x00000008 System.Void Intel.RealSense.Context::remove_OnDevicesChangedEvent(Intel.RealSense.Context/OnDevicesChangedDelegate)
extern void Context_remove_OnDevicesChangedEvent_m9367BFBAFD216048540C3B0CFAA6D7BC635981B5 (void);
// 0x00000009 System.Void Intel.RealSense.Context::add_OnDevicesChanged(Intel.RealSense.Context/OnDevicesChangedDelegate)
extern void Context_add_OnDevicesChanged_m409A40EEFB06AEA08ABD69A891EE9607AF8F55E3 (void);
// 0x0000000A System.Void Intel.RealSense.Context::remove_OnDevicesChanged(Intel.RealSense.Context/OnDevicesChangedDelegate)
extern void Context_remove_OnDevicesChanged_mBC2222D0FD29A52AA5AA085751067843A45018A0 (void);
// 0x0000000B Intel.RealSense.DeviceList Intel.RealSense.Context::QueryDevices(System.Boolean)
extern void Context_QueryDevices_m9D15427411FD9D414A84F6E7866C5E2FB0A664F1 (void);
// 0x0000000C Intel.RealSense.DeviceList Intel.RealSense.Context::get_Devices()
extern void Context_get_Devices_m7B85FF2D892954686D44D57192612EFA3861DC7F (void);
// 0x0000000D Intel.RealSense.PlaybackDevice Intel.RealSense.Context::AddDevice(System.String)
extern void Context_AddDevice_m09B49E056C8FF38720A281FD3324A90557859C96 (void);
// 0x0000000E System.Void Intel.RealSense.Context::RemoveDevice(System.String)
extern void Context_RemoveDevice_m74C30BD78427357D64B7A4FC3AFB3FB6BBDDCA92 (void);
// 0x0000000F System.Void Intel.RealSense.Context::OnDevicesChangedInternal(System.IntPtr,System.IntPtr,System.IntPtr)
extern void Context_OnDevicesChangedInternal_m13FD1F35326571A77CB41B2D4DA98479CF79E277 (void);
// 0x00000010 System.Void Intel.RealSense.Context::Dispose()
extern void Context_Dispose_m0D0C45E1AB80FD8B255B9A6B47382724F9F29925 (void);
// 0x00000011 System.Void Intel.RealSense.Context/OnDevicesChangedDelegate::.ctor(System.Object,System.IntPtr)
extern void OnDevicesChangedDelegate__ctor_m4F10A9F2500370E61126A3811ECAF8DE4C9FFA99 (void);
// 0x00000012 System.Void Intel.RealSense.Context/OnDevicesChangedDelegate::Invoke(Intel.RealSense.DeviceList,Intel.RealSense.DeviceList)
extern void OnDevicesChangedDelegate_Invoke_mA28AECD814E3B7FDBAD5BF41D2A02BD229F13FBD (void);
// 0x00000013 System.IAsyncResult Intel.RealSense.Context/OnDevicesChangedDelegate::BeginInvoke(Intel.RealSense.DeviceList,Intel.RealSense.DeviceList,System.AsyncCallback,System.Object)
extern void OnDevicesChangedDelegate_BeginInvoke_mD0D926AE6C28ECF90289F0943967D5EAF8D960F1 (void);
// 0x00000014 System.Void Intel.RealSense.Context/OnDevicesChangedDelegate::EndInvoke(System.IAsyncResult)
extern void OnDevicesChangedDelegate_EndInvoke_m3CDA36584DC7ACAEBEBEE5DB42C5EEB06200AE4E (void);
// 0x00000015 System.IntPtr Intel.RealSense.NativeMethods::unix_memcpy(System.IntPtr,System.IntPtr,System.Int32)
extern void NativeMethods_unix_memcpy_mF4CA73297BDC6F3BCD241E93555662679B1A10CC (void);
// 0x00000016 System.IntPtr Intel.RealSense.NativeMethods::win_memcpy(System.IntPtr,System.IntPtr,System.Int32)
extern void NativeMethods_win_memcpy_mED6D571E6511E2D664C14F9EF3C1FF92B5D949AA (void);
// 0x00000017 System.IntPtr Intel.RealSense.NativeMethods::rs2_create_record_device(System.IntPtr,System.String,System.Object&)
extern void NativeMethods_rs2_create_record_device_mE39AA003C90861AB904EA7B8055F731C6899A4D0 (void);
// 0x00000018 System.Void Intel.RealSense.NativeMethods::rs2_record_device_pause(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_record_device_pause_mF6A3E53227B59C46EA8745C23EFF18C7925C2198 (void);
// 0x00000019 System.Void Intel.RealSense.NativeMethods::rs2_record_device_resume(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_record_device_resume_mDCB1D96F6BF8021445EAB0C6DDB8F1BEA5241B03 (void);
// 0x0000001A System.IntPtr Intel.RealSense.NativeMethods::rs2_record_device_filename(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_record_device_filename_m674FF6580B951D0F40D19BD97E7F490EC533A9A4 (void);
// 0x0000001B System.IntPtr Intel.RealSense.NativeMethods::rs2_create_playback_device(System.String,System.Object&)
extern void NativeMethods_rs2_create_playback_device_mEFDC342B4EC647F70386032B0A39B3C790010532 (void);
// 0x0000001C System.IntPtr Intel.RealSense.NativeMethods::rs2_playback_device_get_file_path(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_playback_device_get_file_path_mC22390E59A4C548179EEEC72F410CCBD2D210F57 (void);
// 0x0000001D System.UInt64 Intel.RealSense.NativeMethods::rs2_playback_get_duration(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_playback_get_duration_m96E2DAF51EF13A57C0E3F51A4A934D382E8C6584 (void);
// 0x0000001E System.Void Intel.RealSense.NativeMethods::rs2_playback_seek(System.IntPtr,System.Int64,System.Object&)
extern void NativeMethods_rs2_playback_seek_m6DF6363EF7CE5C4B2C2F88A4430A45E9769E55B5 (void);
// 0x0000001F System.UInt64 Intel.RealSense.NativeMethods::rs2_playback_get_position(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_playback_get_position_mC1EDAEB53F7B5B3CC2E49932F1D88A226EDFEE6F (void);
// 0x00000020 System.Void Intel.RealSense.NativeMethods::rs2_playback_device_resume(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_playback_device_resume_m9D584C3E4DB12785837BBC3233F54FFBB0F7E9EE (void);
// 0x00000021 System.Void Intel.RealSense.NativeMethods::rs2_playback_device_pause(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_playback_device_pause_mDD209BD16A644F4BDEE252075AC20E09FA5B4695 (void);
// 0x00000022 System.Void Intel.RealSense.NativeMethods::rs2_playback_device_set_real_time(System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_playback_device_set_real_time_m3EB6C0EA84571DC2DEDAD7E1B375FCDF201FCE3E (void);
// 0x00000023 System.Int32 Intel.RealSense.NativeMethods::rs2_playback_device_is_real_time(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_playback_device_is_real_time_mC62B9E86F6308A579D3B6CC0D732AA8690BA55AB (void);
// 0x00000024 System.Void Intel.RealSense.NativeMethods::rs2_playback_device_set_status_changed_callback(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_playback_device_set_status_changed_callback_mD1E63A26F718A102CAA08DB8B1C5D3B20AC518BA (void);
// 0x00000025 Intel.RealSense.PlaybackStatus Intel.RealSense.NativeMethods::rs2_playback_device_get_current_status(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_playback_device_get_current_status_m368DE607A3F16A21C054CF169B61036DCC574CE2 (void);
// 0x00000026 System.Void Intel.RealSense.NativeMethods::rs2_playback_device_set_playback_speed(System.IntPtr,System.Single,System.Object&)
extern void NativeMethods_rs2_playback_device_set_playback_speed_m37A722D9DCD602887B0F68EA4A560C2AC80F2EA0 (void);
// 0x00000027 System.Void Intel.RealSense.NativeMethods::rs2_playback_device_stop(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_playback_device_stop_mB3D8C08E9679F9CCD2600731EC7983F350CBF9A7 (void);
// 0x00000028 System.IntPtr Intel.RealSense.NativeMethods::rs2_create_colorizer(System.Object&)
extern void NativeMethods_rs2_create_colorizer_m17ED34208949A660118ABD7162423E89855D7919 (void);
// 0x00000029 System.IntPtr Intel.RealSense.NativeMethods::rs2_create_sync_processing_block(System.Object&)
extern void NativeMethods_rs2_create_sync_processing_block_m235218DBD0D8039200EDCEEAAFCEF26242C3FF06 (void);
// 0x0000002A System.IntPtr Intel.RealSense.NativeMethods::rs2_create_pointcloud(System.Object&)
extern void NativeMethods_rs2_create_pointcloud_m16F2A011B4EE51CD87E112C9B5858669A615D70C (void);
// 0x0000002B System.IntPtr Intel.RealSense.NativeMethods::rs2_create_processing_block_fptr(Intel.RealSense.frame_processor_callback,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_create_processing_block_fptr_m5596D5594288FA499F9BE935A71B0C16595D12AA (void);
// 0x0000002C System.Void Intel.RealSense.NativeMethods::rs2_start_processing_fptr(System.IntPtr,Intel.RealSense.frame_callback,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_start_processing_fptr_m748FC6E151D140ED702D41840A93B81874B0917F (void);
// 0x0000002D System.Int32 Intel.RealSense.NativeMethods::rs2_processing_block_register_simple_option(System.IntPtr,Intel.RealSense.Option,System.Single,System.Single,System.Single,System.Single,System.Object&)
extern void NativeMethods_rs2_processing_block_register_simple_option_mF1BC774BC77960A90D45B4A428FEAFB01835BDF5 (void);
// 0x0000002E System.IntPtr Intel.RealSense.NativeMethods::rs2_get_processing_block_info(System.IntPtr,Intel.RealSense.CameraInfo,System.Object&)
extern void NativeMethods_rs2_get_processing_block_info_m212C746C8457679262FFEC0FC74FE06BC290B546 (void);
// 0x0000002F System.Int32 Intel.RealSense.NativeMethods::rs2_supports_processing_block_info(System.IntPtr,Intel.RealSense.CameraInfo,System.Object&)
extern void NativeMethods_rs2_supports_processing_block_info_mF0C59E07DD19A6C4A7C2736A08313FDA72EE3810 (void);
// 0x00000030 System.Void Intel.RealSense.NativeMethods::rs2_start_processing_queue(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_start_processing_queue_mBA03DB715377AD2A345BEF8A6E4127D70C4F5CA9 (void);
// 0x00000031 System.Void Intel.RealSense.NativeMethods::rs2_process_frame(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_process_frame_mA593E25C94B7891650B5F795D756593A59A0A398 (void);
// 0x00000032 System.Void Intel.RealSense.NativeMethods::rs2_delete_processing_block(System.IntPtr)
extern void NativeMethods_rs2_delete_processing_block_m65BBB633ABEF5E550E929F36D31C91ED231FB741 (void);
// 0x00000033 System.IntPtr Intel.RealSense.NativeMethods::rs2_create_frame_queue(System.Int32,System.Object&)
extern void NativeMethods_rs2_create_frame_queue_m9ADD3DF73CFA877696CD162D4E96BD396CF367C6 (void);
// 0x00000034 System.Void Intel.RealSense.NativeMethods::rs2_delete_frame_queue(System.IntPtr)
extern void NativeMethods_rs2_delete_frame_queue_m3F766079F45F2CA4E8F8F7854D3F8A290205BB2C (void);
// 0x00000035 System.IntPtr Intel.RealSense.NativeMethods::rs2_wait_for_frame(System.IntPtr,System.UInt32,System.Object&)
extern void NativeMethods_rs2_wait_for_frame_m2B6153DBA21C3D30FD17968AE9FE99FA185E8896 (void);
// 0x00000036 System.Int32 Intel.RealSense.NativeMethods::rs2_try_wait_for_frame(System.IntPtr,System.UInt32,System.IntPtr&,System.Object&)
extern void NativeMethods_rs2_try_wait_for_frame_m4A5AA0FD5C8FD7A7C1DFEE468D072D21D50D32FC (void);
// 0x00000037 System.Int32 Intel.RealSense.NativeMethods::rs2_poll_for_frame(System.IntPtr,System.IntPtr&,System.Object&)
extern void NativeMethods_rs2_poll_for_frame_m0963CD0A7290C3A99ACE359DE3F810047F6EE820 (void);
// 0x00000038 System.Void Intel.RealSense.NativeMethods::rs2_enqueue_frame(System.IntPtr,System.IntPtr)
extern void NativeMethods_rs2_enqueue_frame_mA8E51BB312727836A31AC13C7C94F4A9A87E2A58 (void);
// 0x00000039 System.Int32 Intel.RealSense.NativeMethods::rs2_frame_queue_size(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_frame_queue_size_m15227CC74F5C5DE6E3BB2D37FC4881716B856534 (void);
// 0x0000003A System.IntPtr Intel.RealSense.NativeMethods::rs2_create_align(Intel.RealSense.Stream,System.Object&)
extern void NativeMethods_rs2_create_align_m6166597BA34BFFA04D303178B3155971B02EC921 (void);
// 0x0000003B System.IntPtr Intel.RealSense.NativeMethods::rs2_create_decimation_filter_block(System.Object&)
extern void NativeMethods_rs2_create_decimation_filter_block_m907A6C505387D228A6EB1B37726D18A9298E575A (void);
// 0x0000003C System.IntPtr Intel.RealSense.NativeMethods::rs2_create_temporal_filter_block(System.Object&)
extern void NativeMethods_rs2_create_temporal_filter_block_m52866A0FF0B0913DAD8C03F10D5FD8CBCD8BD874 (void);
// 0x0000003D System.IntPtr Intel.RealSense.NativeMethods::rs2_create_spatial_filter_block(System.Object&)
extern void NativeMethods_rs2_create_spatial_filter_block_mB724EFF932C6A0D37979A2AAB6EA9F1A944F85EF (void);
// 0x0000003E System.IntPtr Intel.RealSense.NativeMethods::rs2_create_disparity_transform_block(System.Byte,System.Object&)
extern void NativeMethods_rs2_create_disparity_transform_block_m4EC2E99AA682FED415D8E866172FAF0AAB3436DD (void);
// 0x0000003F System.IntPtr Intel.RealSense.NativeMethods::rs2_create_hole_filling_filter_block(System.Object&)
extern void NativeMethods_rs2_create_hole_filling_filter_block_m5EFD4BEB2A3A8D27DA7EE647C2DCC169922E6795 (void);
// 0x00000040 System.IntPtr Intel.RealSense.NativeMethods::rs2_create_threshold(System.Object&)
extern void NativeMethods_rs2_create_threshold_m2085EB9BF0BDFA96CF383D14B407EB1D578129EC (void);
// 0x00000041 System.IntPtr Intel.RealSense.NativeMethods::rs2_create_units_transform(System.Object&)
extern void NativeMethods_rs2_create_units_transform_mE75F100CD984B134C56524B7E7C5463B779465A2 (void);
// 0x00000042 System.IntPtr Intel.RealSense.NativeMethods::rs2_create_zero_order_invalidation_block(System.Object&)
extern void NativeMethods_rs2_create_zero_order_invalidation_block_mA4A099BACFA3FB55E011DCEFA762DF07FF307CE6 (void);
// 0x00000043 System.IntPtr Intel.RealSense.NativeMethods::rs2_create_hdr_merge_processing_block(System.Object&)
extern void NativeMethods_rs2_create_hdr_merge_processing_block_m838192C7B0B5AD86CFC6F975BF47D186520A8D0B (void);
// 0x00000044 System.IntPtr Intel.RealSense.NativeMethods::rs2_create_sequence_id_filter(System.Object&)
extern void NativeMethods_rs2_create_sequence_id_filter_mF4672495680D51EB12B9CD239030CA1F8C6522F0 (void);
// 0x00000045 System.Int32 Intel.RealSense.NativeMethods::rs2_is_option_read_only(System.IntPtr,Intel.RealSense.Option,System.Object&)
extern void NativeMethods_rs2_is_option_read_only_mCA734DA41E3286FC6D5F314F0BB7C62FF03C703A (void);
// 0x00000046 System.Single Intel.RealSense.NativeMethods::rs2_get_option(System.IntPtr,Intel.RealSense.Option,System.Object&)
extern void NativeMethods_rs2_get_option_m4AD3E2E5751C20F18B5DF8D0F9FF5216B4A37EAC (void);
// 0x00000047 System.Void Intel.RealSense.NativeMethods::rs2_set_option(System.IntPtr,Intel.RealSense.Option,System.Single,System.Object&)
extern void NativeMethods_rs2_set_option_mBED9319DA88BD157AF3DFEB63684BD80962E3D88 (void);
// 0x00000048 System.IntPtr Intel.RealSense.NativeMethods::rs2_get_options_list(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_options_list_m11963483875600DDCA8CCD16998CE1D67EDB77FB (void);
// 0x00000049 System.Int32 Intel.RealSense.NativeMethods::rs2_get_options_list_size(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_options_list_size_m9099C545D4EB2AD4BE82F28C5DEE35448A97A07D (void);
// 0x0000004A Intel.RealSense.Option Intel.RealSense.NativeMethods::rs2_get_option_from_list(System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_get_option_from_list_m1C3EC8777A8393E1DE37BCE0FA9568AAA90BEEBC (void);
// 0x0000004B System.Void Intel.RealSense.NativeMethods::rs2_delete_options_list(System.IntPtr)
extern void NativeMethods_rs2_delete_options_list_mDC1849485F8AE35A4E207298CB7609EBC4D02C89 (void);
// 0x0000004C System.Int32 Intel.RealSense.NativeMethods::rs2_supports_option(System.IntPtr,Intel.RealSense.Option,System.Object&)
extern void NativeMethods_rs2_supports_option_m31FB9577147B4D27FDD9083C1FF9E5F77AD755AE (void);
// 0x0000004D System.Void Intel.RealSense.NativeMethods::rs2_get_option_range(System.IntPtr,Intel.RealSense.Option,System.Single&,System.Single&,System.Single&,System.Single&,System.Object&)
extern void NativeMethods_rs2_get_option_range_mB513A947BAFD540D2268F480AE85BA506F05E5C9 (void);
// 0x0000004E System.IntPtr Intel.RealSense.NativeMethods::rs2_get_option_description(System.IntPtr,Intel.RealSense.Option,System.Object&)
extern void NativeMethods_rs2_get_option_description_m23232B3D3E4AD3B5494EE6B4E8553C1EA6A92825 (void);
// 0x0000004F System.IntPtr Intel.RealSense.NativeMethods::rs2_get_option_value_description(System.IntPtr,Intel.RealSense.Option,System.Single,System.Object&)
extern void NativeMethods_rs2_get_option_value_description_m23F3E74B5F43172330F636CCB91E38C1CC63A9D7 (void);
// 0x00000050 System.Int64 Intel.RealSense.NativeMethods::rs2_get_frame_metadata(System.IntPtr,Intel.RealSense.FrameMetadataValue,System.Object&)
extern void NativeMethods_rs2_get_frame_metadata_mC4EDA55B04251B3695CF60A63A09272359FEA828 (void);
// 0x00000051 System.Int32 Intel.RealSense.NativeMethods::rs2_supports_frame_metadata(System.IntPtr,Intel.RealSense.FrameMetadataValue,System.Object&)
extern void NativeMethods_rs2_supports_frame_metadata_mABAE87269735A1E408450782AFAB11B53E3273B8 (void);
// 0x00000052 Intel.RealSense.TimestampDomain Intel.RealSense.NativeMethods::rs2_get_frame_timestamp_domain(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_frame_timestamp_domain_mBD66EEAC534642DA6E5B83F415789ECD1E7C9D88 (void);
// 0x00000053 System.Double Intel.RealSense.NativeMethods::rs2_get_frame_timestamp(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_frame_timestamp_m4D77D4291615D67A06E79E30ADE8D6ACC810EC7C (void);
// 0x00000054 System.IntPtr Intel.RealSense.NativeMethods::rs2_get_frame_sensor(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_frame_sensor_m746BFC2E4C6C7558E4EC861263F637AE4271EEEB (void);
// 0x00000055 System.UInt64 Intel.RealSense.NativeMethods::rs2_get_frame_number(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_frame_number_mECC97315C87B4154A15FDC100F105D28CCD65A84 (void);
// 0x00000056 System.Int32 Intel.RealSense.NativeMethods::rs2_get_frame_data_size(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_frame_data_size_mE7B0B28E4351E3C3BC2861634A5117CB8B751CE5 (void);
// 0x00000057 System.IntPtr Intel.RealSense.NativeMethods::rs2_get_frame_data(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_frame_data_m74C79379E23473A1FD811F92FDDCC14D23CB9FF0 (void);
// 0x00000058 System.Int32 Intel.RealSense.NativeMethods::rs2_get_frame_width(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_frame_width_m8B4DAD7D990F83F1A40A3BA637BA8282D4F4CC4F (void);
// 0x00000059 System.Int32 Intel.RealSense.NativeMethods::rs2_get_frame_height(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_frame_height_m0F7EBF6B64A76163F9BB04031029118BDACEF23A (void);
// 0x0000005A System.Int32 Intel.RealSense.NativeMethods::rs2_get_frame_stride_in_bytes(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_frame_stride_in_bytes_m431B6DDF01D92C8405656817D974B500D35B19F0 (void);
// 0x0000005B System.Int32 Intel.RealSense.NativeMethods::rs2_get_frame_bits_per_pixel(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_frame_bits_per_pixel_m6BAE4A6B26A80B5342D524BE4B1267CACC22B4D4 (void);
// 0x0000005C System.Void Intel.RealSense.NativeMethods::rs2_frame_add_ref(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_frame_add_ref_mA4E129565501E250B106C5C0AC3B7E2D81C141D6 (void);
// 0x0000005D System.Void Intel.RealSense.NativeMethods::rs2_release_frame(System.IntPtr)
extern void NativeMethods_rs2_release_frame_mF77B3EEFB5257D2664DF1CC51F4C371B28D3769A (void);
// 0x0000005E System.Void Intel.RealSense.NativeMethods::rs2_keep_frame(System.IntPtr)
extern void NativeMethods_rs2_keep_frame_mBFAF4E8E5F5E7EFAA2FA2F512B7F8357247C6CF0 (void);
// 0x0000005F System.IntPtr Intel.RealSense.NativeMethods::rs2_get_frame_vertices(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_frame_vertices_mE98EF91E7710F257811CC0911701B6560CFAF764 (void);
// 0x00000060 System.IntPtr Intel.RealSense.NativeMethods::rs2_get_frame_texture_coordinates(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_frame_texture_coordinates_m4D7217FD080FA2284AB809CC6C9ED337AB656B54 (void);
// 0x00000061 System.Int32 Intel.RealSense.NativeMethods::rs2_get_frame_points_count(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_frame_points_count_m5C0969E3437D3A4C42EC076DCC711C83B4A76268 (void);
// 0x00000062 System.Void Intel.RealSense.NativeMethods::rs2_export_to_ply(System.IntPtr,System.String,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_export_to_ply_m728335F655AB4C08D1FB696435A681FE2062771F (void);
// 0x00000063 System.IntPtr Intel.RealSense.NativeMethods::rs2_get_frame_stream_profile(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_frame_stream_profile_mF064863F9186B9ED2003582F02174341CC00F253 (void);
// 0x00000064 System.Int32 Intel.RealSense.NativeMethods::rs2_is_frame_extendable_to(System.IntPtr,Intel.RealSense.Extension,System.Object&)
extern void NativeMethods_rs2_is_frame_extendable_to_m5ED928FBC887124F87C92515943B3A2EA7AC0AD9 (void);
// 0x00000065 System.IntPtr Intel.RealSense.NativeMethods::rs2_allocate_synthetic_video_frame(System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,Intel.RealSense.Extension,System.Object&)
extern void NativeMethods_rs2_allocate_synthetic_video_frame_m1D6A6F963646B6863B967D31A2F58E83D5D49C75 (void);
// 0x00000066 System.IntPtr Intel.RealSense.NativeMethods::rs2_allocate_synthetic_motion_frame(System.IntPtr,System.IntPtr,System.IntPtr,Intel.RealSense.Extension,System.Object&)
extern void NativeMethods_rs2_allocate_synthetic_motion_frame_m5A7F6273A285E027B5D0BB0251505311C5463731 (void);
// 0x00000067 System.IntPtr Intel.RealSense.NativeMethods::rs2_allocate_composite_frame(System.IntPtr,System.IntPtr[],System.Int32,System.Object&)
extern void NativeMethods_rs2_allocate_composite_frame_mF9AAE472A86AAA0080044B11CA45AC8D8FCAF7AE (void);
// 0x00000068 System.IntPtr Intel.RealSense.NativeMethods::rs2_allocate_composite_frame(System.IntPtr,System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_allocate_composite_frame_m3DBF0C1358832170E56AD6BCE37A744B06D456BE (void);
// 0x00000069 System.IntPtr Intel.RealSense.NativeMethods::rs2_extract_frame(System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_extract_frame_m80069C176A28680AA1F3D29ECB540B00A2A111F5 (void);
// 0x0000006A System.Int32 Intel.RealSense.NativeMethods::rs2_embedded_frames_count(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_embedded_frames_count_m283AF389645374B0873EA88156BAD7142251961E (void);
// 0x0000006B System.Void Intel.RealSense.NativeMethods::rs2_synthetic_frame_ready(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_synthetic_frame_ready_m9A1F219D71F492A08BE5259BC9EE668A6D24B252 (void);
// 0x0000006C System.Void Intel.RealSense.NativeMethods::rs2_pose_frame_get_pose_data(System.IntPtr,Intel.RealSense.Pose,System.Object&)
extern void NativeMethods_rs2_pose_frame_get_pose_data_mFFA7B7B50AC93E52AD523F7F65BB0FFAFD760C52 (void);
// 0x0000006D System.Void Intel.RealSense.NativeMethods::rs2_delete_sensor_list(System.IntPtr)
extern void NativeMethods_rs2_delete_sensor_list_mCC338B4C18537D68A578632F849877EB1941AC03 (void);
// 0x0000006E System.Int32 Intel.RealSense.NativeMethods::rs2_get_sensors_count(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_sensors_count_m4012BDD6D04928C291C6126357EF2F0417D6369E (void);
// 0x0000006F System.Void Intel.RealSense.NativeMethods::rs2_delete_sensor(System.IntPtr)
extern void NativeMethods_rs2_delete_sensor_mFA3E34B1A34779D7704BB1E2A92067ACF3DD6592 (void);
// 0x00000070 System.IntPtr Intel.RealSense.NativeMethods::rs2_create_sensor(System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_create_sensor_m0A0AEF651456BA1BDCE5DA404B5BE1C679E815E2 (void);
// 0x00000071 System.IntPtr Intel.RealSense.NativeMethods::rs2_create_device_from_sensor(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_create_device_from_sensor_mCEB067F0B545F33607C15A8C440FF38B4858F6B7 (void);
// 0x00000072 System.IntPtr Intel.RealSense.NativeMethods::rs2_get_sensor_info(System.IntPtr,Intel.RealSense.CameraInfo,System.Object&)
extern void NativeMethods_rs2_get_sensor_info_mB0EA85297EA04098A427C06F03F359CBBF369446 (void);
// 0x00000073 System.Int32 Intel.RealSense.NativeMethods::rs2_supports_sensor_info(System.IntPtr,Intel.RealSense.CameraInfo,System.Object&)
extern void NativeMethods_rs2_supports_sensor_info_m64B19C02F0CF838BEA806C96A3166FA9E1F97265 (void);
// 0x00000074 System.Int32 Intel.RealSense.NativeMethods::rs2_is_sensor_extendable_to(System.IntPtr,Intel.RealSense.Extension,System.Object&)
extern void NativeMethods_rs2_is_sensor_extendable_to_m0C0397F69E4FEC37C0B8FABD5E19D9F06F025C4D (void);
// 0x00000075 System.Single Intel.RealSense.NativeMethods::rs2_get_depth_scale(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_depth_scale_mACAD7E7E8D9B6C86DA7D35150014723D4328A2D9 (void);
// 0x00000076 System.Void Intel.RealSense.NativeMethods::rs2_set_region_of_interest(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Object&)
extern void NativeMethods_rs2_set_region_of_interest_m9879F1E8A43F9D18D6BF264F7908C5E0641B7801 (void);
// 0x00000077 System.Void Intel.RealSense.NativeMethods::rs2_get_region_of_interest(System.IntPtr,System.Int32&,System.Int32&,System.Int32&,System.Int32&,System.Object&)
extern void NativeMethods_rs2_get_region_of_interest_m83E30DC8FD24B75768E4E3E08813EA643C257EFC (void);
// 0x00000078 System.Void Intel.RealSense.NativeMethods::rs2_open(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_open_m1AB784D616234AAC74DAC21A438382B713A47CA8 (void);
// 0x00000079 System.Void Intel.RealSense.NativeMethods::rs2_open_multiple(System.IntPtr,System.IntPtr[],System.Int32,System.Object&)
extern void NativeMethods_rs2_open_multiple_m3AC1E4DACBE62478E3B31458AF587A7AFCC0694B (void);
// 0x0000007A System.Void Intel.RealSense.NativeMethods::rs2_close(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_close_m36ACE5CD630B8071F6A2F67FD1FE3593306F59A4 (void);
// 0x0000007B System.Void Intel.RealSense.NativeMethods::rs2_start(System.IntPtr,Intel.RealSense.frame_callback,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_start_m6C83B9D86B139C0A44E032FA4ECD949D1F9EA944 (void);
// 0x0000007C System.Void Intel.RealSense.NativeMethods::rs2_start_queue(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_start_queue_mFEFF52B1FE76580BD02AE7BFA2C9806C7481676D (void);
// 0x0000007D System.Void Intel.RealSense.NativeMethods::rs2_stop(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_stop_m3CDC6089CE88ABFCAEE36DC54E491FEC2B90B2D5 (void);
// 0x0000007E System.Void Intel.RealSense.NativeMethods::rs2_set_notifications_callback(System.IntPtr,Intel.RealSense.frame_callback,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_set_notifications_callback_m4715A403142208F24F54B14099CAEA34A1A197E7 (void);
// 0x0000007F System.IntPtr Intel.RealSense.NativeMethods::rs2_get_notification_description(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_notification_description_mDF41E6E33B2CAFD61319A6622B146154D745C690 (void);
// 0x00000080 System.Double Intel.RealSense.NativeMethods::rs2_get_notification_timestamp(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_notification_timestamp_m20E7BF7EBD102B1EDB31F80A167BC5D44C57EC5F (void);
// 0x00000081 Intel.RealSense.LogSeverity Intel.RealSense.NativeMethods::rs2_get_notification_severity(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_notification_severity_mD410876DE1F55ADFE0041DB7DA577C0A42565461 (void);
// 0x00000082 Intel.RealSense.NotificationCategory Intel.RealSense.NativeMethods::rs2_get_notification_category(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_notification_category_m45E6184820B7661EBB0C687505F06EDEC9860731 (void);
// 0x00000083 System.IntPtr Intel.RealSense.NativeMethods::rs2_get_stream_profiles(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_stream_profiles_m5DFCDDB005A112692E781FA402C06D2ECB9CBB62 (void);
// 0x00000084 System.IntPtr Intel.RealSense.NativeMethods::rs2_get_recommended_processing_blocks(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_recommended_processing_blocks_m28D8313A4DA75FCA966CB7F090565329CFC912AA (void);
// 0x00000085 System.IntPtr Intel.RealSense.NativeMethods::rs2_get_processing_block(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_processing_block_m2B8719C7C95473E1B64B664C4948DFC952A235EF (void);
// 0x00000086 System.IntPtr Intel.RealSense.NativeMethods::rs2_get_stream_profile(System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_get_stream_profile_mBE4C5064AA21D19D24CA454168C2202DB950AC3F (void);
// 0x00000087 System.IntPtr Intel.RealSense.NativeMethods::rs2_get_processing_block(System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_get_processing_block_mF824988671732443A0075760F7BEC83937EF8E53 (void);
// 0x00000088 System.Void Intel.RealSense.NativeMethods::rs2_get_stream_profile_data(System.IntPtr,Intel.RealSense.Stream&,Intel.RealSense.Format&,System.Int32&,System.Int32&,System.Int32&,System.Object&)
extern void NativeMethods_rs2_get_stream_profile_data_mB7DDBFC137235916F5CD5A4288594692998F69C9 (void);
// 0x00000089 System.Void Intel.RealSense.NativeMethods::rs2_set_stream_profile_data(System.IntPtr,Intel.RealSense.Stream,System.Int32,Intel.RealSense.Format,System.Object&)
extern void NativeMethods_rs2_set_stream_profile_data_m6B5C12FFF7C8D40AEB61C4418C5CCF0158E33C98 (void);
// 0x0000008A System.IntPtr Intel.RealSense.NativeMethods::rs2_clone_stream_profile(System.IntPtr,Intel.RealSense.Stream,System.Int32,Intel.RealSense.Format,System.Object&)
extern void NativeMethods_rs2_clone_stream_profile_mD70D13C4EEDA346EE8D6B8296D631F3A3577EC24 (void);
// 0x0000008B System.IntPtr Intel.RealSense.NativeMethods::rs2_clone_video_stream_profile(System.IntPtr,Intel.RealSense.Stream,System.Int32,Intel.RealSense.Format,System.Int32,System.Int32,Intel.RealSense.Intrinsics,System.Object&)
extern void NativeMethods_rs2_clone_video_stream_profile_m26A1A17234895179A9595990E4EB73AFEA802BFB (void);
// 0x0000008C System.Void Intel.RealSense.NativeMethods::rs2_delete_stream_profile(System.IntPtr)
extern void NativeMethods_rs2_delete_stream_profile_mFC33D94ED6C96FF79D9E9489E06B4EB89B79F4AF (void);
// 0x0000008D System.Int32 Intel.RealSense.NativeMethods::rs2_stream_profile_is(System.IntPtr,Intel.RealSense.Extension,System.Object&)
extern void NativeMethods_rs2_stream_profile_is_mACA39789E9A5A0769E745498F9B9775F8B49A22D (void);
// 0x0000008E System.Int32 Intel.RealSense.NativeMethods::rs2_is_processing_block_extendable_to(System.IntPtr,Intel.RealSense.Extension,System.Object&)
extern void NativeMethods_rs2_is_processing_block_extendable_to_mE3A29EF997CA3252373A4E4A1CA98F87BCDCC3CE (void);
// 0x0000008F System.Void Intel.RealSense.NativeMethods::rs2_get_video_stream_resolution(System.IntPtr,System.Int32&,System.Int32&,System.Object&)
extern void NativeMethods_rs2_get_video_stream_resolution_mF843C990A70663D16389FCBC5C9480636FA6B483 (void);
// 0x00000090 System.Int32 Intel.RealSense.NativeMethods::rs2_is_stream_profile_default(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_is_stream_profile_default_m994C68E98E15AC76543DC957918CDBAB21DA3DEA (void);
// 0x00000091 System.Int32 Intel.RealSense.NativeMethods::rs2_get_stream_profiles_count(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_stream_profiles_count_m58E16D384018E9BA09FD7A532617401167FDDC70 (void);
// 0x00000092 System.Void Intel.RealSense.NativeMethods::rs2_delete_stream_profiles_list(System.IntPtr)
extern void NativeMethods_rs2_delete_stream_profiles_list_mC30AE5B160B81DA73229E858F7D1DF4A4B055899 (void);
// 0x00000093 System.Int32 Intel.RealSense.NativeMethods::rs2_get_recommended_processing_blocks_count(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_recommended_processing_blocks_count_mA3F21F481BFE48CBFBD645A78873849293D4550A (void);
// 0x00000094 System.Void Intel.RealSense.NativeMethods::rs2_delete_recommended_processing_blocks(System.IntPtr)
extern void NativeMethods_rs2_delete_recommended_processing_blocks_m47EA731403F5E325FE1A9445FADC1FD2A5321F77 (void);
// 0x00000095 System.Void Intel.RealSense.NativeMethods::rs2_get_extrinsics(System.IntPtr,System.IntPtr,Intel.RealSense.Extrinsics&,System.Object&)
extern void NativeMethods_rs2_get_extrinsics_mCEA0BA5D3B33BE78A6F5125E77411B48FEF86773 (void);
// 0x00000096 System.Void Intel.RealSense.NativeMethods::rs2_register_extrinsics(System.IntPtr,System.IntPtr,Intel.RealSense.Extrinsics,System.Object&)
extern void NativeMethods_rs2_register_extrinsics_m123ACA202046FCEC5569FC8B837AAE4C223BDEAD (void);
// 0x00000097 System.Void Intel.RealSense.NativeMethods::rs2_get_video_stream_intrinsics(System.IntPtr,Intel.RealSense.Intrinsics&,System.Object&)
extern void NativeMethods_rs2_get_video_stream_intrinsics_m310C35681CC70B189703A3C68F739B248ECC4645 (void);
// 0x00000098 System.IntPtr Intel.RealSense.NativeMethods::rs2_export_localization_map(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_export_localization_map_m3F85C0172E647DBB4DE19CBE8CA6B22B6C1B0482 (void);
// 0x00000099 System.Int32 Intel.RealSense.NativeMethods::rs2_import_localization_map(System.IntPtr,System.IntPtr,System.UInt32,System.Object&)
extern void NativeMethods_rs2_import_localization_map_mCD507D04427C7B5DBBFA00CDC4F257C6CAC53258 (void);
// 0x0000009A System.Int32 Intel.RealSense.NativeMethods::rs2_set_static_node(System.IntPtr,System.String,Intel.RealSense.Math.Vector,Intel.RealSense.Math.Quaternion,System.Object&)
extern void NativeMethods_rs2_set_static_node_m8596A5C2CF2C81E137F5CEB747A7D81B1D0A9603 (void);
// 0x0000009B System.Int32 Intel.RealSense.NativeMethods::rs2_get_static_node(System.IntPtr,System.String,Intel.RealSense.Math.Vector&,Intel.RealSense.Math.Quaternion&,System.Object&)
extern void NativeMethods_rs2_get_static_node_mEA33E3FBB1E53B130912BCC08CE74CDE99E749FA (void);
// 0x0000009C System.Int32 Intel.RealSense.NativeMethods::rs2_remove_static_node(System.IntPtr,System.String,System.Object&)
extern void NativeMethods_rs2_remove_static_node_m500DDA1DBC847B78A1B86FE210B6BE7557BB9105 (void);
// 0x0000009D System.Int32 Intel.RealSense.NativeMethods::rs2_load_wheel_odometry_config(System.IntPtr,System.IntPtr,System.UInt32,System.Object&)
extern void NativeMethods_rs2_load_wheel_odometry_config_m168681846C72060BD0808CA1751ACE11C414E8B8 (void);
// 0x0000009E System.Int32 Intel.RealSense.NativeMethods::rs2_send_wheel_odometry(System.IntPtr,System.Byte,System.UInt32,Intel.RealSense.Math.Vector,System.Object&)
extern void NativeMethods_rs2_send_wheel_odometry_m199E9A72871CA5A57B0765643D2325FCE2B1389B (void);
// 0x0000009F System.Void Intel.RealSense.NativeMethods::rs2_get_motion_intrinsics(System.IntPtr,Intel.RealSense.MotionDeviceIntrinsics&,System.Object&)
extern void NativeMethods_rs2_get_motion_intrinsics_m90CC0069309BEB9FCF2EF2FD25F3A87B43FB4860 (void);
// 0x000000A0 System.Single Intel.RealSense.NativeMethods::rs2_get_max_usable_depth_range(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_max_usable_depth_range_m211CC2933B990F1CF8BD5028BFA3EDE3B61B719F (void);
// 0x000000A1 System.Int32 Intel.RealSense.NativeMethods::rs2_get_device_count(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_device_count_m6F23BF7E07A8DA364B0656008B771FBABC68BC1F (void);
// 0x000000A2 System.Void Intel.RealSense.NativeMethods::rs2_delete_device_list(System.IntPtr)
extern void NativeMethods_rs2_delete_device_list_mB22EDC1D9A2AFFA6AF15C9554E9C1F1757BDB955 (void);
// 0x000000A3 System.Int32 Intel.RealSense.NativeMethods::rs2_device_list_contains(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_device_list_contains_m6E98D3B1D7C9683BD4C59106022678FFD4645ED5 (void);
// 0x000000A4 System.IntPtr Intel.RealSense.NativeMethods::rs2_create_device(System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_create_device_m49B01B79CCC4B79EEFE2FEEBD992C0119AD44A19 (void);
// 0x000000A5 System.Void Intel.RealSense.NativeMethods::rs2_delete_device(System.IntPtr)
extern void NativeMethods_rs2_delete_device_m6CB3FAC9AC6728DC67484772333A6DB3637A2924 (void);
// 0x000000A6 System.IntPtr Intel.RealSense.NativeMethods::rs2_get_device_info(System.IntPtr,Intel.RealSense.CameraInfo,System.Object&)
extern void NativeMethods_rs2_get_device_info_m98D5825400552F1BCEC85401F5E0DC1BD176F97C (void);
// 0x000000A7 System.Int32 Intel.RealSense.NativeMethods::rs2_supports_device_info(System.IntPtr,Intel.RealSense.CameraInfo,System.Object&)
extern void NativeMethods_rs2_supports_device_info_mAA320484DC0CBABEAF11C01B0ED844BBFC9BA29A (void);
// 0x000000A8 System.Void Intel.RealSense.NativeMethods::rs2_hardware_reset(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_hardware_reset_mEA86BAF4252D7AFF2EEE2F183EDA44F2E7D1A076 (void);
// 0x000000A9 System.IntPtr Intel.RealSense.NativeMethods::rs2_send_and_receive_raw_data(System.IntPtr,System.IntPtr,System.UInt32,System.Object&)
extern void NativeMethods_rs2_send_and_receive_raw_data_m60B079F956BC26C547922422BD2CAAF80CADE8E7 (void);
// 0x000000AA System.IntPtr Intel.RealSense.NativeMethods::rs2_build_debug_protocol_command(System.IntPtr,System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.IntPtr,System.UInt32,System.Object&)
extern void NativeMethods_rs2_build_debug_protocol_command_m23CA931D4DF567353F6A6F225B8D38DAC949C6FD (void);
// 0x000000AB System.Int32 Intel.RealSense.NativeMethods::rs2_is_device_extendable_to(System.IntPtr,Intel.RealSense.Extension,System.Object&)
extern void NativeMethods_rs2_is_device_extendable_to_m1CC17960440AF86D9CE3E97A44A5C119D1BD6D23 (void);
// 0x000000AC System.IntPtr Intel.RealSense.NativeMethods::rs2_query_sensors(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_query_sensors_m0B7E50C5A91FA4C8C59A034C7D0BC4D459BD7E2C (void);
// 0x000000AD System.Void Intel.RealSense.NativeMethods::rs2_enter_update_state(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_enter_update_state_mF962CAD25981A8202B7DEF8342B92FD569D660FC (void);
// 0x000000AE System.Int32 Intel.RealSense.NativeMethods::rs2_check_firmware_compatibility(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_check_firmware_compatibility_m1FFA6B573A29BD41666EA010A861F7DD9988BFB0 (void);
// 0x000000AF System.Void Intel.RealSense.NativeMethods::rs2_update_firmware(System.IntPtr,System.IntPtr,System.Int32,Intel.RealSense.rs2_update_progress_callback,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_update_firmware_m7CEB72B69C2B09FFE3714ABF4E2067D31E0B64CC (void);
// 0x000000B0 System.IntPtr Intel.RealSense.NativeMethods::rs2_create_flash_backup(System.IntPtr,Intel.RealSense.rs2_update_progress_callback,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_create_flash_backup_mEEB790B8A8FB864DD9C87B7B56D8C0462F922918 (void);
// 0x000000B1 Intel.RealSense.ContextHandle Intel.RealSense.NativeMethods::rs2_create_context(System.Int32,System.Object&)
extern void NativeMethods_rs2_create_context_mE498A101ED2AD9AD4EDAFA2C07FB92AC38704B04 (void);
// 0x000000B2 System.Void Intel.RealSense.NativeMethods::rs2_delete_context(Intel.RealSense.ContextHandle)
extern void NativeMethods_rs2_delete_context_m4B103800EA9DEB0154802946829750506E9E924B (void);
// 0x000000B3 System.IntPtr Intel.RealSense.NativeMethods::rs2_context_add_device(Intel.RealSense.ContextHandle,System.String,System.Object&)
extern void NativeMethods_rs2_context_add_device_m1F24EFD7DECE5027290C942DD88DC181E7F9C200 (void);
// 0x000000B4 System.Void Intel.RealSense.NativeMethods::rs2_context_remove_device(Intel.RealSense.ContextHandle,System.String,System.Object&)
extern void NativeMethods_rs2_context_remove_device_mD0D1DCAEFFA076BCC371107002DAA4AA2CDE99F0 (void);
// 0x000000B5 System.IntPtr Intel.RealSense.NativeMethods::rs2_query_devices(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_query_devices_m07F9F97F666ADEFA042BB25C8D33721B1A5A7792 (void);
// 0x000000B6 System.IntPtr Intel.RealSense.NativeMethods::rs2_query_devices_ex(Intel.RealSense.ContextHandle,System.Int32,System.Object&)
extern void NativeMethods_rs2_query_devices_ex_m6FB24560ABDADA4081C56F6872DD6B660F27A3F0 (void);
// 0x000000B7 System.IntPtr Intel.RealSense.NativeMethods::rs2_create_device_hub(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_create_device_hub_mBFD2BE33323E0266AF88D4F7380ADED48187A86F (void);
// 0x000000B8 System.Void Intel.RealSense.NativeMethods::rs2_delete_device_hub(System.IntPtr)
extern void NativeMethods_rs2_delete_device_hub_m68D741540D84E6A41E510ABCFB5D9716F422EA9E (void);
// 0x000000B9 System.IntPtr Intel.RealSense.NativeMethods::rs2_device_hub_wait_for_device(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_device_hub_wait_for_device_m723B7CBD5FAEA0F02D21A47A418959CD601F15E6 (void);
// 0x000000BA System.Int32 Intel.RealSense.NativeMethods::rs2_device_hub_is_device_connected(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_device_hub_is_device_connected_mCCBCA6CD4FE0394CF4F7AE03606226BEE20DB6CD (void);
// 0x000000BB System.Void Intel.RealSense.NativeMethods::rs2_set_devices_changed_callback(Intel.RealSense.ContextHandle,Intel.RealSense.rs2_devices_changed_callback,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_set_devices_changed_callback_mFB656DB2836A309DBCC41F6263AFA884AC90EB3B (void);
// 0x000000BC System.Void Intel.RealSense.NativeMethods::rs2_context_add_software_device(Intel.RealSense.ContextHandle,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_context_add_software_device_mF346BF90DA5E90AE80525580AFDD878BF2A5B73E (void);
// 0x000000BD System.Int32 Intel.RealSense.NativeMethods::rs2_get_raw_data_size(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_raw_data_size_m9EE3890494451159C8850EEF7EFF7482CAEB2430 (void);
// 0x000000BE System.Void Intel.RealSense.NativeMethods::rs2_delete_raw_data(System.IntPtr)
extern void NativeMethods_rs2_delete_raw_data_mBDCE49D5E11ED68AD76BA9FD85BF9BA7B1D0ECC4 (void);
// 0x000000BF System.IntPtr Intel.RealSense.NativeMethods::rs2_get_raw_data(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_raw_data_mD9BA44BF6F7EBC884E2534BAA5EC09877B075C35 (void);
// 0x000000C0 System.Int32 Intel.RealSense.NativeMethods::rs2_get_api_version(System.Object&)
extern void NativeMethods_rs2_get_api_version_m5B8B8DF0177EE5BEBC87D166BE15A6D35005F7B1 (void);
// 0x000000C1 System.Void Intel.RealSense.NativeMethods::rs2_log_to_console(Intel.RealSense.LogSeverity,System.Object&)
extern void NativeMethods_rs2_log_to_console_m2D6487FB2FB5F10B58FD10153BCAD40EB291D9DA (void);
// 0x000000C2 System.Void Intel.RealSense.NativeMethods::rs2_log_to_file(Intel.RealSense.LogSeverity,System.String,System.Object&)
extern void NativeMethods_rs2_log_to_file_mBC27A8846BBEF205C119654C0200325AB92A71FC (void);
// 0x000000C3 System.Void Intel.RealSense.NativeMethods::rs2_log(Intel.RealSense.LogSeverity,System.String,System.Object&)
extern void NativeMethods_rs2_log_m09AD2E21AFC7A06BDC428E7632D94AB5FE6BAB5A (void);
// 0x000000C4 System.Single Intel.RealSense.NativeMethods::rs2_depth_frame_get_distance(System.IntPtr,System.Int32,System.Int32,System.Object&)
extern void NativeMethods_rs2_depth_frame_get_distance_mD954B58FBC8799654B58F902482D15CEECB1A6B4 (void);
// 0x000000C5 System.Single Intel.RealSense.NativeMethods::rs2_depth_frame_get_units(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_depth_frame_get_units_mB24B0907BD0287C55DED234152B2A02AF5C387D9 (void);
// 0x000000C6 System.Single Intel.RealSense.NativeMethods::rs2_depth_stereo_frame_get_baseline(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_depth_stereo_frame_get_baseline_m0265CD9D5BF7A5E3E588CD2FE03509CF16D4B957 (void);
// 0x000000C7 System.Double Intel.RealSense.NativeMethods::rs2_get_time(System.Object&)
extern void NativeMethods_rs2_get_time_mD1BA7D7BCFF2436AA268BA4E71C234E6CC767681 (void);
// 0x000000C8 System.Void Intel.RealSense.NativeMethods::rs2_toggle_advanced_mode(System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_toggle_advanced_mode_mF675CBD993AB518429DC57AD0F8FD9380BD9A4EB (void);
// 0x000000C9 System.Void Intel.RealSense.NativeMethods::rs2_is_enabled(System.IntPtr,System.Int32&,System.Object&)
extern void NativeMethods_rs2_is_enabled_mE1C332AA73AE328FADF348D7CE1BD078B084F0B8 (void);
// 0x000000CA System.Void Intel.RealSense.NativeMethods::rs2_set_depth_control(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_set_depth_control_m3EDAAB29BA675C9482840245A2C84C1E412677F3 (void);
// 0x000000CB System.Void Intel.RealSense.NativeMethods::rs2_get_depth_control(System.IntPtr,System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_get_depth_control_m066ABB2960D8F8ED48ED6ABA79584B5145F0ABA2 (void);
// 0x000000CC System.Void Intel.RealSense.NativeMethods::rs2_set_rsm(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_set_rsm_m0CBFF65022EFA62F2FE1E08AD50DA23CB06EEC43 (void);
// 0x000000CD System.Void Intel.RealSense.NativeMethods::rs2_get_rsm(System.IntPtr,System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_get_rsm_m02CB5A86DD9B15197A2D0FE44227850209A581E3 (void);
// 0x000000CE System.Void Intel.RealSense.NativeMethods::rs2_set_rau_support_vector_control(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_set_rau_support_vector_control_mC9B04D91294946961568A74A2C57170DF6E4BE29 (void);
// 0x000000CF System.Void Intel.RealSense.NativeMethods::rs2_get_rau_support_vector_control(System.IntPtr,System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_get_rau_support_vector_control_m33AE99660AEF8AF2F39F5176A8D397904DDA96B3 (void);
// 0x000000D0 System.Void Intel.RealSense.NativeMethods::rs2_set_color_control(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_set_color_control_m5B2E7B5377AA1BA71431F9A2839CD05A002BD18F (void);
// 0x000000D1 System.Void Intel.RealSense.NativeMethods::rs2_get_color_control(System.IntPtr,System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_get_color_control_m254F75F62551C33A499F35FBD91FF19FD93BCFB8 (void);
// 0x000000D2 System.Void Intel.RealSense.NativeMethods::rs2_set_rau_thresholds_control(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_set_rau_thresholds_control_m8FB92110ADB59030797919936CE3F72A5DA2D2D6 (void);
// 0x000000D3 System.Void Intel.RealSense.NativeMethods::rs2_get_rau_thresholds_control(System.IntPtr,System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_get_rau_thresholds_control_m448F36C1377AAA8D80811068023FE705C711B347 (void);
// 0x000000D4 System.Void Intel.RealSense.NativeMethods::rs2_set_slo_color_thresholds_control(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_set_slo_color_thresholds_control_mFDF121CD1BEF4822503FFA19ECD1AF7EE9AD5307 (void);
// 0x000000D5 System.Void Intel.RealSense.NativeMethods::rs2_get_slo_color_thresholds_control(System.IntPtr,System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_get_slo_color_thresholds_control_m0FB82E72D31BC71B3565E73F15AA3F0A1042FA7B (void);
// 0x000000D6 System.Void Intel.RealSense.NativeMethods::rs2_set_slo_penalty_control(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_set_slo_penalty_control_mC734DA429324BB5FD8054387265A5EC43AA46150 (void);
// 0x000000D7 System.Void Intel.RealSense.NativeMethods::rs2_get_slo_penalty_control(System.IntPtr,System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_get_slo_penalty_control_m4638A59BEEA901D2E8E76323A685503693726DF0 (void);
// 0x000000D8 System.Void Intel.RealSense.NativeMethods::rs2_set_hdad(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_set_hdad_mC3895BB32662D629EBFF1C5F31BA33563ECC4993 (void);
// 0x000000D9 System.Void Intel.RealSense.NativeMethods::rs2_get_hdad(System.IntPtr,System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_get_hdad_m35A94C480DFF5EDC597EF309EA663072E04FB3A5 (void);
// 0x000000DA System.Void Intel.RealSense.NativeMethods::rs2_set_color_correction(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_set_color_correction_m2316502BFB83D9CEDC6E64BBEE8B1A6A9A25E87A (void);
// 0x000000DB System.Void Intel.RealSense.NativeMethods::rs2_get_color_correction(System.IntPtr,System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_get_color_correction_m53F1EAA891DDEFDAAB0AE286090B76D394439101 (void);
// 0x000000DC System.Void Intel.RealSense.NativeMethods::rs2_set_depth_table(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_set_depth_table_m3CC09A505894E81630635C7E0A0289A5559AECE4 (void);
// 0x000000DD System.Void Intel.RealSense.NativeMethods::rs2_get_depth_table(System.IntPtr,System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_get_depth_table_m3E5C7A0EAF64B9BA79E7DCF093C1184D3CDFABDE (void);
// 0x000000DE System.Void Intel.RealSense.NativeMethods::rs2_set_ae_control(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_set_ae_control_m5CC0CC8327FBEE569EA3129C7601E7326D36CAD8 (void);
// 0x000000DF System.Void Intel.RealSense.NativeMethods::rs2_get_ae_control(System.IntPtr,System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_get_ae_control_m0E8405269A6D6C04AAD8AFA6F89F02EC69A7D065 (void);
// 0x000000E0 System.Void Intel.RealSense.NativeMethods::rs2_set_census(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_set_census_m1A7D93340A05DCBFDF3D9FED0599492CC31E1334 (void);
// 0x000000E1 System.Void Intel.RealSense.NativeMethods::rs2_get_census(System.IntPtr,System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_get_census_mC8E870D0A24E0615F2F0C977577B693F5EECB8D0 (void);
// 0x000000E2 System.Void Intel.RealSense.NativeMethods::rs2_set_amp_factor(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_set_amp_factor_m2D26BBDC75080FB77A95DE134FA9D259503D6832 (void);
// 0x000000E3 System.Void Intel.RealSense.NativeMethods::rs2_get_amp_factor(System.IntPtr,System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_get_amp_factor_m1E3EDCDFDD2390139D5C6441617C48BEF0E6442C (void);
// 0x000000E4 System.Void Intel.RealSense.NativeMethods::rs2_load_json(System.IntPtr,System.String,System.UInt32,System.Object&)
extern void NativeMethods_rs2_load_json_mA99BFA19E489AA49787E379B963CA85D4F6D841A (void);
// 0x000000E5 System.IntPtr Intel.RealSense.NativeMethods::rs2_serialize_json(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_serialize_json_m458FEA68DC9BB149F606EE4627F470FB3816C0E1 (void);
// 0x000000E6 System.Void Intel.RealSense.NativeMethods::rs2_write_calibration(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_write_calibration_m961E1C24819871A504F1233FB5C1905D686B5DC9 (void);
// 0x000000E7 System.Void Intel.RealSense.NativeMethods::rs2_reset_to_factory_calibration(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_reset_to_factory_calibration_m5757A46F4ECB7A19BCC1BCE357EB68195AD5A045 (void);
// 0x000000E8 System.IntPtr Intel.RealSense.NativeMethods::rs2_run_on_chip_calibration(System.IntPtr,System.String,System.Int32,System.Single&,Intel.RealSense.rs2_update_progress_callback,System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_run_on_chip_calibration_mAF8FB46C274860B1E9C24443CC289EE25DBCB165 (void);
// 0x000000E9 System.IntPtr Intel.RealSense.NativeMethods::rs2_run_tare_calibration(System.IntPtr,System.Single,System.String,System.Int32,Intel.RealSense.rs2_update_progress_callback,System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_run_tare_calibration_mA766F0325E1D2F768A2EC49193AB7ACEB0D52D59 (void);
// 0x000000EA System.IntPtr Intel.RealSense.NativeMethods::rs2_run_focal_length_calibration(System.IntPtr,System.IntPtr,System.IntPtr,System.Single,System.Single,System.Int32,System.Single&,System.Single&,Intel.RealSense.rs2_update_progress_callback,System.Object&)
extern void NativeMethods_rs2_run_focal_length_calibration_m9043D18A0BF01C4B99D43F9D4A0571F0AD19875F (void);
// 0x000000EB System.IntPtr Intel.RealSense.NativeMethods::rs2_run_uv_map_calibration(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Int32,System.Single&,System.Single&,Intel.RealSense.rs2_update_progress_callback,System.Object&)
extern void NativeMethods_rs2_run_uv_map_calibration_m4C3A2C6F9D63CB14B730062728B979A259394183 (void);
// 0x000000EC System.Single Intel.RealSense.NativeMethods::rs2_calculate_target_z(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single,System.Single,System.Object&)
extern void NativeMethods_rs2_calculate_target_z_m1C3E97C0D6290CC8BC27FCFFAEBE031E790B3949 (void);
// 0x000000ED System.Single Intel.RealSense.NativeMethods::rs2_calculate_target_z(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single,System.Single,Intel.RealSense.rs2_update_progress_callback,System.Object&)
extern void NativeMethods_rs2_calculate_target_z_m4A1B8BCC8293BBE6CDAF2FB63D61686E3BE4A015 (void);
// 0x000000EE System.IntPtr Intel.RealSense.NativeMethods::rs2_get_calibration_table(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_calibration_table_m5427D80C2E2D33758A6B06D0B8783F9B49A88DEE (void);
// 0x000000EF System.Void Intel.RealSense.NativeMethods::rs2_set_calibration_table(System.IntPtr,System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_set_calibration_table_mF064114CE0609AD87870C34B6B9863B1885827FD (void);
// 0x000000F0 System.IntPtr Intel.RealSense.NativeMethods::rs2_create_recording_context(System.Int32,System.String,System.String,Intel.RealSense.RecordingMode,System.Object&)
extern void NativeMethods_rs2_create_recording_context_m6456A27CD64431A1C63D8E63D24A318E4CBE62BA (void);
// 0x000000F1 System.IntPtr Intel.RealSense.NativeMethods::rs2_create_mock_context(System.Int32,System.String,System.String,System.String,System.Object&)
extern void NativeMethods_rs2_create_mock_context_mFAF614EF3BE41F1AB9F2ACA4537AAD778219EFA2 (void);
// 0x000000F2 System.IntPtr Intel.RealSense.NativeMethods::rs2_create_software_device(System.Object&)
extern void NativeMethods_rs2_create_software_device_mAA0BA96CB43739F4392A916CD86C070B8F8BC141 (void);
// 0x000000F3 System.IntPtr Intel.RealSense.NativeMethods::rs2_software_device_add_sensor(System.IntPtr,System.String,System.Object&)
extern void NativeMethods_rs2_software_device_add_sensor_mEC73C3BD8559F1FD08CA20AD0A6AE3A05A6DD58B (void);
// 0x000000F4 System.Void Intel.RealSense.NativeMethods::rs2_software_sensor_on_video_frame(System.IntPtr,Intel.RealSense.SoftwareVideoFrame,System.Object&)
extern void NativeMethods_rs2_software_sensor_on_video_frame_m47F5231A2A20DA4E66A5BC144467AFDE64304ACB (void);
// 0x000000F5 System.Void Intel.RealSense.NativeMethods::rs2_software_sensor_on_motion_frame(System.IntPtr,Intel.RealSense.SoftwareMotionFrame,System.Object&)
extern void NativeMethods_rs2_software_sensor_on_motion_frame_m4BAA8B9F5DFE63ED07BBCD4FD3C454C7E22B4250 (void);
// 0x000000F6 System.Void Intel.RealSense.NativeMethods::rs2_software_sensor_on_pose_frame(System.IntPtr,Intel.RealSense.SoftwarePoseFrame,System.Object&)
extern void NativeMethods_rs2_software_sensor_on_pose_frame_mB568A7A59C9BFE9983190E26C6B625F1F428ABA5 (void);
// 0x000000F7 System.Void Intel.RealSense.NativeMethods::rs2_software_sensor_set_metadata(System.IntPtr,System.Int64,Intel.RealSense.FrameMetadataValue,System.Object&)
extern void NativeMethods_rs2_software_sensor_set_metadata_m71A5D2CDD7543E0D99275883742A6AADB599C5C6 (void);
// 0x000000F8 System.Void Intel.RealSense.NativeMethods::rs2_software_device_create_matcher(System.IntPtr,Intel.RealSense.Matchers,System.Object&)
extern void NativeMethods_rs2_software_device_create_matcher_m9F646C516B0CAA3681C85E4143385C1C8920DD83 (void);
// 0x000000F9 System.IntPtr Intel.RealSense.NativeMethods::rs2_software_sensor_add_video_stream(System.IntPtr,Intel.RealSense.SoftwareVideoStream,System.Object&)
extern void NativeMethods_rs2_software_sensor_add_video_stream_m0A13A1BB501D63684BC1F9CD7159B7BEA940F458 (void);
// 0x000000FA System.IntPtr Intel.RealSense.NativeMethods::rs2_software_sensor_add_motion_stream(System.IntPtr,Intel.RealSense.SoftwareMotionStream,System.Object&)
extern void NativeMethods_rs2_software_sensor_add_motion_stream_m268056FEB9F378D4A7503A1833E6AB93AFCBB83B (void);
// 0x000000FB System.IntPtr Intel.RealSense.NativeMethods::rs2_software_sensor_add_pose_stream(System.IntPtr,Intel.RealSense.SoftwarePoseStream,System.Object&)
extern void NativeMethods_rs2_software_sensor_add_pose_stream_m848D4E945D3F8CC8AE88956AF4BFB935FBA7FE1D (void);
// 0x000000FC System.Void Intel.RealSense.NativeMethods::rs2_software_sensor_add_read_only_option(System.IntPtr,Intel.RealSense.Option,System.Single,System.Object&)
extern void NativeMethods_rs2_software_sensor_add_read_only_option_m67E111A09B29C8116120251C0813CDA00793E418 (void);
// 0x000000FD System.Void Intel.RealSense.NativeMethods::rs2_software_sensor_update_read_only_option(System.IntPtr,Intel.RealSense.Option,System.Single,System.Object&)
extern void NativeMethods_rs2_software_sensor_update_read_only_option_m837C9A09462BB9BEDD4895803E0BDBF66E748CCE (void);
// 0x000000FE System.IntPtr Intel.RealSense.NativeMethods::rs2_create_fw_log_message(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_create_fw_log_message_mFE92924E4FBFB2FE203C73156EC1C67C10188466 (void);
// 0x000000FF System.Void Intel.RealSense.NativeMethods::rs2_delete_fw_log_message(System.IntPtr)
extern void NativeMethods_rs2_delete_fw_log_message_m999472FDAE7412F21FD187AB76DD1330AC9EC766 (void);
// 0x00000100 System.UInt32 Intel.RealSense.NativeMethods::rs2_get_number_of_fw_logs(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_number_of_fw_logs_mEA3BAFB4C1AE9A7FA80110DA00A157F916EECAEA (void);
// 0x00000101 System.Int32 Intel.RealSense.NativeMethods::rs2_get_fw_log(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_fw_log_m43881F44D77C906BA317CFAB0468EDA3CED8E2B9 (void);
// 0x00000102 System.Int32 Intel.RealSense.NativeMethods::rs2_get_flash_log(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_flash_log_mF4068963B89F9692EC41AEADDE28EC7EAC605F8E (void);
// 0x00000103 System.IntPtr Intel.RealSense.NativeMethods::rs2_fw_log_message_data(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_fw_log_message_data_mB24EBD63AEEFE529176C5E80A08A77509261AC0E (void);
// 0x00000104 System.Int32 Intel.RealSense.NativeMethods::rs2_fw_log_message_size(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_fw_log_message_size_mEBF17681067428293425489C21003514FAC2B9FA (void);
// 0x00000105 System.UInt32 Intel.RealSense.NativeMethods::rs2_fw_log_message_timestamp(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_fw_log_message_timestamp_m69FE7AE8355A21EE427353811167B029A22A6D08 (void);
// 0x00000106 System.Int32 Intel.RealSense.NativeMethods::rs2_fw_log_message_severity(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_fw_log_message_severity_m1908665012D3B77C652121E0E41AF8DC4F778880 (void);
// 0x00000107 System.Int32 Intel.RealSense.NativeMethods::rs2_init_fw_log_parser(System.IntPtr,System.String,System.Object&)
extern void NativeMethods_rs2_init_fw_log_parser_m2859B6085858E17E510D029B86D75B517EC035B5 (void);
// 0x00000108 System.IntPtr Intel.RealSense.NativeMethods::rs2_create_fw_log_parsed_message(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_create_fw_log_parsed_message_m7F546686DE9BBFCDE9C18ECD8235CF17B5297D0D (void);
// 0x00000109 System.Void Intel.RealSense.NativeMethods::rs2_delete_fw_log_parsed_message(System.IntPtr)
extern void NativeMethods_rs2_delete_fw_log_parsed_message_m79571EDCAD6CB3546468205BD3659F3E1A8150C0 (void);
// 0x0000010A System.Int32 Intel.RealSense.NativeMethods::rs2_parse_firmware_log(System.IntPtr,System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_parse_firmware_log_m538ABD633EE6A621D0D5F2283A44D712005C6C69 (void);
// 0x0000010B System.IntPtr Intel.RealSense.NativeMethods::rs2_get_fw_log_parsed_message(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_fw_log_parsed_message_mE2BAF02457BB88C22F4937300F8469F35DBD49CA (void);
// 0x0000010C System.IntPtr Intel.RealSense.NativeMethods::rs2_get_fw_log_parsed_file_name(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_fw_log_parsed_file_name_m8CAE03F66A95CEEB7B5F7D3DB6D39BB02C3A7559 (void);
// 0x0000010D System.IntPtr Intel.RealSense.NativeMethods::rs2_get_fw_log_parsed_thread_name(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_fw_log_parsed_thread_name_mDF9DBFAD4F739F3FA71E768742FEE88A30655651 (void);
// 0x0000010E System.Int32 Intel.RealSense.NativeMethods::rs2_get_fw_log_parsed_severity(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_fw_log_parsed_severity_m2111119543AA31604235E093F669AC18E4C8CE7E (void);
// 0x0000010F System.UInt32 Intel.RealSense.NativeMethods::rs2_get_fw_log_parsed_line(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_fw_log_parsed_line_m6D59AF4568A37C710ABAF688546ECB22058C2F4B (void);
// 0x00000110 System.UInt32 Intel.RealSense.NativeMethods::rs2_get_fw_log_parsed_timestamp(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_fw_log_parsed_timestamp_m9736763A84653B97F31A1E5A34BAB56BF6F50FA3 (void);
// 0x00000111 System.UInt32 Intel.RealSense.NativeMethods::rs2_get_fw_log_parsed_sequence_id(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_get_fw_log_parsed_sequence_id_m1D4BF8FCDE101C853F7E8DEC24DF24E4F314A033 (void);
// 0x00000112 System.IntPtr Intel.RealSense.NativeMethods::rs2_create_terminal_parser(System.String,System.Object&)
extern void NativeMethods_rs2_create_terminal_parser_mBC503CC841959C32EACCC7AAAB1D2EDCA9E3E4B3 (void);
// 0x00000113 System.Void Intel.RealSense.NativeMethods::rs2_delete_terminal_parser(System.IntPtr)
extern void NativeMethods_rs2_delete_terminal_parser_m13B49363BD175BD62A35A47D2C49617E7EF4CBEF (void);
// 0x00000114 System.IntPtr Intel.RealSense.NativeMethods::rs2_terminal_parse_command(System.IntPtr,System.String,System.UInt32,System.Object&)
extern void NativeMethods_rs2_terminal_parse_command_mDE96B91EC0BCA04C2FD2698A242951AD496DCE5F (void);
// 0x00000115 System.IntPtr Intel.RealSense.NativeMethods::rs2_terminal_parse_response(System.IntPtr,System.String,System.UInt32,System.IntPtr,System.UInt32,System.Object&)
extern void NativeMethods_rs2_terminal_parse_response_mB387475AF11205AA4B24175C6D72B5EC46EC79C3 (void);
// 0x00000116 System.IntPtr Intel.RealSense.NativeMethods::rs2_create_pipeline(Intel.RealSense.ContextHandle,System.Object&)
extern void NativeMethods_rs2_create_pipeline_m9B60755C8AF1A33B15680DEF603983F62BE52FE9 (void);
// 0x00000117 System.Void Intel.RealSense.NativeMethods::rs2_pipeline_stop(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_pipeline_stop_mD1EE44A557C0E6FEA2D70F3327618C9003B16707 (void);
// 0x00000118 System.IntPtr Intel.RealSense.NativeMethods::rs2_pipeline_wait_for_frames(System.IntPtr,System.UInt32,System.Object&)
extern void NativeMethods_rs2_pipeline_wait_for_frames_m48A38A13E58F3ADDA43033BE1E4B5FA2AD351566 (void);
// 0x00000119 System.Int32 Intel.RealSense.NativeMethods::rs2_pipeline_try_wait_for_frames(System.IntPtr,System.IntPtr&,System.UInt32,System.Object&)
extern void NativeMethods_rs2_pipeline_try_wait_for_frames_m9C56B9A3B011A7F009CC3FB150E69FB3AB231C15 (void);
// 0x0000011A System.Int32 Intel.RealSense.NativeMethods::rs2_pipeline_poll_for_frames(System.IntPtr,System.IntPtr&,System.Object&)
extern void NativeMethods_rs2_pipeline_poll_for_frames_m98A310F8CC803F4188F80D49128E41DB9F6812D3 (void);
// 0x0000011B System.Void Intel.RealSense.NativeMethods::rs2_delete_pipeline(System.IntPtr)
extern void NativeMethods_rs2_delete_pipeline_mFA8857EE985C5AC28C0AB1D150AE1B18775DD751 (void);
// 0x0000011C System.IntPtr Intel.RealSense.NativeMethods::rs2_pipeline_start(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_pipeline_start_m07013C3BBC8A243F42EBCF4BB807B751DD839257 (void);
// 0x0000011D System.IntPtr Intel.RealSense.NativeMethods::rs2_pipeline_start_with_config(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_pipeline_start_with_config_m769C04031C7253F4ED2748A1D41C7775B343827D (void);
// 0x0000011E System.IntPtr Intel.RealSense.NativeMethods::rs2_pipeline_start_with_callback(System.IntPtr,Intel.RealSense.frame_callback,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_pipeline_start_with_callback_m35792C7DC33259565DEAD212167A6C21E1762011 (void);
// 0x0000011F System.IntPtr Intel.RealSense.NativeMethods::rs2_pipeline_start_with_config_and_callback(System.IntPtr,System.IntPtr,Intel.RealSense.frame_callback,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_pipeline_start_with_config_and_callback_mF1C7DE40F0C7A86A1F3B8AB0460356B62C560855 (void);
// 0x00000120 System.IntPtr Intel.RealSense.NativeMethods::rs2_pipeline_get_active_profile(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_pipeline_get_active_profile_mD4A3CB806E0227F1CE4F6C0A7CD9FC9069834026 (void);
// 0x00000121 System.IntPtr Intel.RealSense.NativeMethods::rs2_pipeline_profile_get_device(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_pipeline_profile_get_device_m5C4287664E567DE719AE5383E6EAF91DC4643788 (void);
// 0x00000122 System.IntPtr Intel.RealSense.NativeMethods::rs2_pipeline_profile_get_streams(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_pipeline_profile_get_streams_m5AFA91FA1098B703D690ECEB6E17CC30BE72D1AC (void);
// 0x00000123 System.Void Intel.RealSense.NativeMethods::rs2_delete_pipeline_profile(System.IntPtr)
extern void NativeMethods_rs2_delete_pipeline_profile_mF450697991A0B36F68FC1799B780F43AF2D7B65B (void);
// 0x00000124 System.IntPtr Intel.RealSense.NativeMethods::rs2_create_config(System.Object&)
extern void NativeMethods_rs2_create_config_m735C45C92323AE931135124853434A1EA9C0BD4E (void);
// 0x00000125 System.Void Intel.RealSense.NativeMethods::rs2_delete_config(System.IntPtr)
extern void NativeMethods_rs2_delete_config_mCBF239111B36A5C167B2146FB935CF25B07F082B (void);
// 0x00000126 System.Void Intel.RealSense.NativeMethods::rs2_config_enable_stream(System.IntPtr,Intel.RealSense.Stream,System.Int32,System.Int32,System.Int32,Intel.RealSense.Format,System.Int32,System.Object&)
extern void NativeMethods_rs2_config_enable_stream_mAA6453E20401B2B043A3ADC9C5EB84AFE006EC2E (void);
// 0x00000127 System.Void Intel.RealSense.NativeMethods::rs2_config_enable_all_stream(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_config_enable_all_stream_mE02633F9A970A307F3316C12E8B869A7A5D2B9BD (void);
// 0x00000128 System.Void Intel.RealSense.NativeMethods::rs2_config_enable_device(System.IntPtr,System.String,System.Object&)
extern void NativeMethods_rs2_config_enable_device_mDFDC0673300DDCC7F868D86C7C2CFF9DF0C340FB (void);
// 0x00000129 System.Void Intel.RealSense.NativeMethods::rs2_config_enable_device_from_file(System.IntPtr,System.String,System.Object&)
extern void NativeMethods_rs2_config_enable_device_from_file_m9826EF0CE21930FA16567BD380AE3E3E246D1CED (void);
// 0x0000012A System.Void Intel.RealSense.NativeMethods::rs2_config_enable_device_from_file_repeat_option(System.IntPtr,System.String,System.Int32,System.Object&)
extern void NativeMethods_rs2_config_enable_device_from_file_repeat_option_mBC39F2E19E84C040FA919CD03DF1E64AEE091458 (void);
// 0x0000012B System.Void Intel.RealSense.NativeMethods::rs2_config_enable_record_to_file(System.IntPtr,System.String,System.Object&)
extern void NativeMethods_rs2_config_enable_record_to_file_m0613A71371038256E9E3CCC2DA87270E1B5EF901 (void);
// 0x0000012C System.Void Intel.RealSense.NativeMethods::rs2_config_disable_stream(System.IntPtr,System.Int32,System.Object&)
extern void NativeMethods_rs2_config_disable_stream_m99203A8A34940390E7C1E297FFB2F9C718D495C9 (void);
// 0x0000012D System.Void Intel.RealSense.NativeMethods::rs2_config_disable_indexed_stream(System.IntPtr,Intel.RealSense.Stream,System.Int32,System.Object&)
extern void NativeMethods_rs2_config_disable_indexed_stream_m80DBFE20C67D3303B2B3CD5705A88845629CCAE1 (void);
// 0x0000012E System.Void Intel.RealSense.NativeMethods::rs2_config_disable_all_streams(System.IntPtr,System.Object&)
extern void NativeMethods_rs2_config_disable_all_streams_m623154D52516F3C1DE1CA28DC566692797E8564D (void);
// 0x0000012F System.IntPtr Intel.RealSense.NativeMethods::rs2_config_resolve(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_config_resolve_m6256675FC8DE4534A84D2E49502393477B0DD95C (void);
// 0x00000130 System.Int32 Intel.RealSense.NativeMethods::rs2_config_can_resolve(System.IntPtr,System.IntPtr,System.Object&)
extern void NativeMethods_rs2_config_can_resolve_m1C6AC752D03749AC5918FA535BB8DA9165E7C990 (void);
// 0x00000131 System.IntPtr Intel.RealSense.NativeMethods::rs2_create_net_device(System.Int32,System.String,System.Object&)
extern void NativeMethods_rs2_create_net_device_m82AA8A5C5B8B26FD36DB0EF2CC2CB335BA157892 (void);
// 0x00000132 System.IntPtr Intel.RealSense.NativeMethods::rs2_get_failed_function(System.IntPtr)
extern void NativeMethods_rs2_get_failed_function_mB1ACC53D6F98EBD995335D2F40042A4F56EBD847 (void);
// 0x00000133 System.IntPtr Intel.RealSense.NativeMethods::rs2_get_failed_args(System.IntPtr)
extern void NativeMethods_rs2_get_failed_args_m2F8C445166E5473706247214731448B93E5B9010 (void);
// 0x00000134 System.IntPtr Intel.RealSense.NativeMethods::rs2_get_error_message(System.IntPtr)
extern void NativeMethods_rs2_get_error_message_m842829599ABE67AD67CBD31DC5E1BA94A1E5946A (void);
// 0x00000135 Intel.RealSense.ExceptionType Intel.RealSense.NativeMethods::rs2_get_librealsense_exception_type(System.IntPtr)
extern void NativeMethods_rs2_get_librealsense_exception_type_m357485000EA52BEEFEF04FCEF28C0BF9E843A9FE (void);
// 0x00000136 System.IntPtr Intel.RealSense.NativeMethods::rs2_free_error(System.IntPtr)
extern void NativeMethods_rs2_free_error_m5439B41C63D7579DACFCA844EA6B434F703F7797 (void);
// 0x00000137 System.Void Intel.RealSense.NativeMethods::.cctor()
extern void NativeMethods__cctor_m1CAF30FFED3BA3C02DC2D759752AFD7F7A07B103 (void);
// 0x00000138 System.Void Intel.RealSense.NativeMethods/MemCpyDelegate::.ctor(System.Object,System.IntPtr)
extern void MemCpyDelegate__ctor_m72E5B98D688D4F60DB97295A0D41E46B8786035D (void);
// 0x00000139 System.IntPtr Intel.RealSense.NativeMethods/MemCpyDelegate::Invoke(System.IntPtr,System.IntPtr,System.Int32)
extern void MemCpyDelegate_Invoke_m7B2CDF37BDEA32366C0A789E9EF76534B60DF87F (void);
// 0x0000013A System.IAsyncResult Intel.RealSense.NativeMethods/MemCpyDelegate::BeginInvoke(System.IntPtr,System.IntPtr,System.Int32,System.AsyncCallback,System.Object)
extern void MemCpyDelegate_BeginInvoke_m955807FE13A566543A9688B6FE13094261B5630A (void);
// 0x0000013B System.IntPtr Intel.RealSense.NativeMethods/MemCpyDelegate::EndInvoke(System.IAsyncResult)
extern void MemCpyDelegate_EndInvoke_m00EA97BC603AB0E39997DE9E451A6E321D05E531 (void);
// 0x0000013C Intel.RealSense.NativeMethods/MemCpyDelegate Intel.RealSense.NativeMethods/MemCpy::GetMethod()
extern void MemCpy_GetMethod_mC2DF44BF333D2894B6F81AB2BCF29F44AAD96944 (void);
// 0x0000013D System.Void Intel.RealSense.AdvancedDevice::.ctor(System.IntPtr)
extern void AdvancedDevice__ctor_mF37FA8C11660A0276F9565AD5AF4EDE056A9F1C4 (void);
// 0x0000013E Intel.RealSense.AdvancedDevice Intel.RealSense.AdvancedDevice::FromDevice(Intel.RealSense.Device)
extern void AdvancedDevice_FromDevice_mD14AFA95944B8BCDF5B5F07EC3398BBFBAF61997 (void);
// 0x0000013F System.Boolean Intel.RealSense.AdvancedDevice::get_AdvancedModeEnabled()
extern void AdvancedDevice_get_AdvancedModeEnabled_mB15FEBF5C21A34D7429CEDC4770E5033C8A2CC79 (void);
// 0x00000140 System.Void Intel.RealSense.AdvancedDevice::set_AdvancedModeEnabled(System.Boolean)
extern void AdvancedDevice_set_AdvancedModeEnabled_m34DD75F9EF36044A9588E8F3FAB89AA214B9068C (void);
// 0x00000141 System.String Intel.RealSense.AdvancedDevice::get_JsonConfiguration()
extern void AdvancedDevice_get_JsonConfiguration_mC6CD4F6D5D129FA391BD3451B3DDD77472CA7854 (void);
// 0x00000142 System.Void Intel.RealSense.AdvancedDevice::set_JsonConfiguration(System.String)
extern void AdvancedDevice_set_JsonConfiguration_mE4236F8DC3A62432A66CABEA6FB8DFA76F094D04 (void);
// 0x00000143 System.Void Intel.RealSense.SerializableDevice::.ctor(System.IntPtr)
extern void SerializableDevice__ctor_m8475841EC8CE5F347E7FB1D29BFD11D5635F7C6E (void);
// 0x00000144 Intel.RealSense.SerializableDevice Intel.RealSense.SerializableDevice::FromDevice(Intel.RealSense.Device)
extern void SerializableDevice_FromDevice_m73B252EB21A5DAF8BD30B9202EA3E3D87977B84D (void);
// 0x00000145 System.String Intel.RealSense.SerializableDevice::get_JsonConfiguration()
extern void SerializableDevice_get_JsonConfiguration_mD62D42DA4500CD31605BEAA2D7C8D3DB4EDADEFD (void);
// 0x00000146 System.Void Intel.RealSense.SerializableDevice::set_JsonConfiguration(System.String)
extern void SerializableDevice_set_JsonConfiguration_m4AFC48C0F17D78A6DE3A53AB6F89B1301A35A329 (void);
// 0x00000147 System.Void Intel.RealSense.AutoCalibratedDevice::.ctor(System.IntPtr)
extern void AutoCalibratedDevice__ctor_m82138A77EBC91696D3ECDB85B83D5AA8DBA0BB9E (void);
// 0x00000148 Intel.RealSense.AutoCalibratedDevice Intel.RealSense.AutoCalibratedDevice::FromDevice(Intel.RealSense.Device)
extern void AutoCalibratedDevice_FromDevice_m25FF9B3151888976CD4D580BAF8936672CF5ADB1 (void);
// 0x00000149 System.Byte[] Intel.RealSense.AutoCalibratedDevice::RunOnChipCalibration(System.String,System.Single&,System.Int32)
extern void AutoCalibratedDevice_RunOnChipCalibration_m37ECEE00B292CE7B05C61A99EF774E95ED3E62FE (void);
// 0x0000014A System.Byte[] Intel.RealSense.AutoCalibratedDevice::RunOnChipCalibration(System.String,System.Single&,Intel.RealSense.ProgressCallback,System.Int32)
extern void AutoCalibratedDevice_RunOnChipCalibration_mF55F587C5685B39F166E0B73CAE31EB2D5862C07 (void);
// 0x0000014B System.Byte[] Intel.RealSense.AutoCalibratedDevice::RunTareCalibration(System.Single,System.String,System.Int32)
extern void AutoCalibratedDevice_RunTareCalibration_m029FCBC4C21DCEE557C4A68B98DDD0746F1A7B0A (void);
// 0x0000014C System.Byte[] Intel.RealSense.AutoCalibratedDevice::RunTareCalibration(System.Single,System.String,Intel.RealSense.ProgressCallback,System.Int32)
extern void AutoCalibratedDevice_RunTareCalibration_m8C287EAC764CFCF3FF6364BF0F69E7418245CA26 (void);
// 0x0000014D System.Byte[] Intel.RealSense.AutoCalibratedDevice::RunFocalLengthCalibration(Intel.RealSense.FrameQueue,Intel.RealSense.FrameQueue,System.Single,System.Single,System.Int32,System.Single&,System.Single&)
extern void AutoCalibratedDevice_RunFocalLengthCalibration_m6248E72DDDAB85F34232237797617F9F63B0101E (void);
// 0x0000014E System.Byte[] Intel.RealSense.AutoCalibratedDevice::RunFocalLengthCalibration(Intel.RealSense.FrameQueue,Intel.RealSense.FrameQueue,System.Single,System.Single,System.Int32,System.Single&,System.Single&,Intel.RealSense.ProgressCallback)
extern void AutoCalibratedDevice_RunFocalLengthCalibration_mBB67397BCCCE001C53A5547A629A3E246E65D087 (void);
// 0x0000014F System.Byte[] Intel.RealSense.AutoCalibratedDevice::RunUVMapCalibration(Intel.RealSense.FrameQueue,Intel.RealSense.FrameQueue,Intel.RealSense.FrameQueue,System.Int32,System.Single&,System.Single&)
extern void AutoCalibratedDevice_RunUVMapCalibration_m0FBFF78B1ADA4411DB11FFCA2D5C827AD6D96824 (void);
// 0x00000150 System.Byte[] Intel.RealSense.AutoCalibratedDevice::RunUVMapCalibration(Intel.RealSense.FrameQueue,Intel.RealSense.FrameQueue,Intel.RealSense.FrameQueue,System.Int32,System.Single&,System.Single&,Intel.RealSense.ProgressCallback)
extern void AutoCalibratedDevice_RunUVMapCalibration_m75B63E91FFC0D7D8199C80CB1612589C4A7D8E50 (void);
// 0x00000151 System.Single Intel.RealSense.AutoCalibratedDevice::CalculateTargetZ(Intel.RealSense.FrameQueue,Intel.RealSense.FrameQueue,Intel.RealSense.FrameQueue,System.Single,System.Single)
extern void AutoCalibratedDevice_CalculateTargetZ_m85506C1C6334F4F6E132665FDE17795EC63D23FB (void);
// 0x00000152 System.Single Intel.RealSense.AutoCalibratedDevice::CalculateTargetZ(Intel.RealSense.FrameQueue,Intel.RealSense.FrameQueue,Intel.RealSense.FrameQueue,System.Single,System.Single,Intel.RealSense.ProgressCallback)
extern void AutoCalibratedDevice_CalculateTargetZ_m5D4E6A2AF6D539314D9113E31FCB9E842855AE7A (void);
// 0x00000153 System.Byte[] Intel.RealSense.AutoCalibratedDevice::get_CalibrationTable()
extern void AutoCalibratedDevice_get_CalibrationTable_m5D8E61881591003279E9C450615A9A16DE3829A4 (void);
// 0x00000154 System.Void Intel.RealSense.AutoCalibratedDevice::set_CalibrationTable(System.Byte[])
extern void AutoCalibratedDevice_set_CalibrationTable_m3933EB51A32CCE5209B1C91B6DB91FB014F9FC38 (void);
// 0x00000155 System.Byte[] Intel.RealSense.AutoCalibratedDevice::GetByteArrayFromRawDataObject(System.IntPtr)
extern void AutoCalibratedDevice_GetByteArrayFromRawDataObject_m02020BCAA38A343FDAAAE71A817451B1048C0633 (void);
// 0x00000156 System.Void Intel.RealSense.AutoCalibratedDevice/<>c__DisplayClass3_0::.ctor()
extern void U3CU3Ec__DisplayClass3_0__ctor_m5762A8058D9EC47866D20FC1727F17BE4EEF0B46 (void);
// 0x00000157 System.Void Intel.RealSense.AutoCalibratedDevice/<>c__DisplayClass3_0::<RunOnChipCalibration>b__0(System.Single,System.IntPtr)
extern void U3CU3Ec__DisplayClass3_0_U3CRunOnChipCalibrationU3Eb__0_mBE20B178B6AF8045322B541E1B710C29A547E4DB (void);
// 0x00000158 System.Void Intel.RealSense.AutoCalibratedDevice/<>c__DisplayClass5_0::.ctor()
extern void U3CU3Ec__DisplayClass5_0__ctor_m77D3125EC1BF3578C2908216BBEC02735845C98A (void);
// 0x00000159 System.Void Intel.RealSense.AutoCalibratedDevice/<>c__DisplayClass5_0::<RunTareCalibration>b__0(System.Single,System.IntPtr)
extern void U3CU3Ec__DisplayClass5_0_U3CRunTareCalibrationU3Eb__0_m47F030D346B9AB3B2F02EF70DAB79B83A9F0AC6C (void);
// 0x0000015A System.Void Intel.RealSense.AutoCalibratedDevice/<>c__DisplayClass7_0::.ctor()
extern void U3CU3Ec__DisplayClass7_0__ctor_mB1206C6E7E626CE714A5B87AB7D41A1E38C75B78 (void);
// 0x0000015B System.Void Intel.RealSense.AutoCalibratedDevice/<>c__DisplayClass7_0::<RunFocalLengthCalibration>b__0(System.Single,System.IntPtr)
extern void U3CU3Ec__DisplayClass7_0_U3CRunFocalLengthCalibrationU3Eb__0_m81FCEDDC7ACD4222A24B11CFDA89BC421085B867 (void);
// 0x0000015C System.Void Intel.RealSense.AutoCalibratedDevice/<>c__DisplayClass9_0::.ctor()
extern void U3CU3Ec__DisplayClass9_0__ctor_m1B3CC58E384615EA769E9A7D78A63D45A4EA50C5 (void);
// 0x0000015D System.Void Intel.RealSense.AutoCalibratedDevice/<>c__DisplayClass9_0::<RunUVMapCalibration>b__0(System.Single,System.IntPtr)
extern void U3CU3Ec__DisplayClass9_0_U3CRunUVMapCalibrationU3Eb__0_m79BBCB4E4C2FBCE2E8071F1DCC8B3A7BE555B701 (void);
// 0x0000015E System.Void Intel.RealSense.AutoCalibratedDevice/<>c__DisplayClass11_0::.ctor()
extern void U3CU3Ec__DisplayClass11_0__ctor_m72181A899BD13AFB1765D3E8FAAA8293816FC2A6 (void);
// 0x0000015F System.Void Intel.RealSense.AutoCalibratedDevice/<>c__DisplayClass11_0::<CalculateTargetZ>b__0(System.Single,System.IntPtr)
extern void U3CU3Ec__DisplayClass11_0_U3CCalculateTargetZU3Eb__0_m57D4913A31E1668EF57CAA8CBF00E10C700474FC (void);
// 0x00000160 System.Void Intel.RealSense.CalibratedDevice::.ctor(System.IntPtr)
extern void CalibratedDevice__ctor_m4E587377112B053DD17A55698FB3513E708EC427 (void);
// 0x00000161 Intel.RealSense.CalibratedDevice Intel.RealSense.CalibratedDevice::FromDevice(Intel.RealSense.Device)
extern void CalibratedDevice_FromDevice_mEBAAC7484332FFC3A34B7C1FBA72BDD0AA99FEE3 (void);
// 0x00000162 System.Void Intel.RealSense.CalibratedDevice::WriteCalibration()
extern void CalibratedDevice_WriteCalibration_m33151615427F70FF1901A09CA8B27D855C45268A (void);
// 0x00000163 System.Void Intel.RealSense.CalibratedDevice::reset_to_factory_calibration()
extern void CalibratedDevice_reset_to_factory_calibration_mF262AC997814912F4E9070DDA340CE5FB22A741B (void);
// 0x00000164 System.Void Intel.RealSense.DebugDevice::.ctor(System.IntPtr)
extern void DebugDevice__ctor_m9F3CA7331781BBD21B049E76977166488FAAD0BA (void);
// 0x00000165 Intel.RealSense.DebugDevice Intel.RealSense.DebugDevice::FromDevice(Intel.RealSense.Device)
extern void DebugDevice_FromDevice_m2718B1F0A877D474C1529E026B3F8B391A6F7B38 (void);
// 0x00000166 System.Byte[] Intel.RealSense.DebugDevice::BuildCommand(System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.Byte[])
extern void DebugDevice_BuildCommand_m50AFE7CB7E7E598D3AB9CF2398436F0B09BEA305 (void);
// 0x00000167 System.Byte[] Intel.RealSense.DebugDevice::SendReceiveRawData(System.Byte[])
extern void DebugDevice_SendReceiveRawData_m7F5248F0558B047D4C7305DDFC83D6C20A273C11 (void);
// 0x00000168 System.Void Intel.RealSense.Device::Initialize()
extern void Device_Initialize_m704F4BCD2AD2AEC35B91C182A87F956E1E82BABA (void);
// 0x00000169 System.Void Intel.RealSense.Device::Dispose(System.Boolean)
extern void Device_Dispose_m1F2E2915BA2976223C17BEBE85581FBF05066385 (void);
// 0x0000016A System.Void Intel.RealSense.Device::.ctor(System.IntPtr)
extern void Device__ctor_mB5BAC531CB1CE29FE2AE38215AD1BAF576283BD5 (void);
// 0x0000016B System.Void Intel.RealSense.Device::.ctor(System.IntPtr,Intel.RealSense.Base.Deleter)
extern void Device__ctor_mE601B51A6FF0EE87C5B9B8C1D2E53F29907C580D (void);
// 0x0000016C T Intel.RealSense.Device::Create(System.IntPtr)
// 0x0000016D T Intel.RealSense.Device::Create(System.IntPtr,Intel.RealSense.Base.Deleter)
// 0x0000016E Intel.RealSense.InfoCollection Intel.RealSense.Device::get_Info()
extern void Device_get_Info_m00D6466D210FCEA32987F7C9F59A7F90066B62D9 (void);
// 0x0000016F System.Void Intel.RealSense.Device::set_Info(Intel.RealSense.InfoCollection)
extern void Device_set_Info_mF28C86F1AE42A089D1F83090787694A8866A24F3 (void);
// 0x00000170 System.Collections.ObjectModel.ReadOnlyCollection`1<Intel.RealSense.Sensor> Intel.RealSense.Device::QuerySensors()
extern void Device_QuerySensors_m76B93648BB6BE863CA89AF77BFB85BC8D7B2EF91 (void);
// 0x00000171 System.Collections.ObjectModel.ReadOnlyCollection`1<Intel.RealSense.Sensor> Intel.RealSense.Device::get_Sensors()
extern void Device_get_Sensors_mDF41564EB34A4A45BDDE051C28D49F7FB84B3A43 (void);
// 0x00000172 System.Void Intel.RealSense.Device::HardwareReset()
extern void Device_HardwareReset_m2D98E50B155BB1202398E37BAEB23326CF41DF85 (void);
// 0x00000173 System.Boolean Intel.RealSense.Device::Is(Intel.RealSense.Extension)
extern void Device_Is_m2DD5B9A2CCC9A8728C724E1A63A88F1847433C10 (void);
// 0x00000174 T Intel.RealSense.Device::As()
// 0x00000175 System.Void Intel.RealSense.Device::.cctor()
extern void Device__cctor_m4ED5A25AF2C47385F558B06C9D32D5C0B08796DB (void);
// 0x00000176 System.Void Intel.RealSense.DeviceList::.ctor(System.IntPtr)
extern void DeviceList__ctor_m0D6146D7E15CB2257F425421EC227ED2E38BD4F6 (void);
// 0x00000177 System.Collections.Generic.IEnumerator`1<Intel.RealSense.Device> Intel.RealSense.DeviceList::GetEnumerator()
extern void DeviceList_GetEnumerator_mF1C600676BDAAA61B53769E6B8536871BCA21177 (void);
// 0x00000178 System.Collections.IEnumerator Intel.RealSense.DeviceList::System.Collections.IEnumerable.GetEnumerator()
extern void DeviceList_System_Collections_IEnumerable_GetEnumerator_m5A0A51513426E9CEEADB9123D4105467D2D5420E (void);
// 0x00000179 System.Int32 Intel.RealSense.DeviceList::get_Count()
extern void DeviceList_get_Count_mD786F97BCFD463EE030CBD87C169FBE1F6FA674D (void);
// 0x0000017A Intel.RealSense.Device Intel.RealSense.DeviceList::get_Item(System.Int32)
extern void DeviceList_get_Item_m1A258A977AF6286515CD8BBBC2A842EE7BD2ECC1 (void);
// 0x0000017B System.Boolean Intel.RealSense.DeviceList::Contains(Intel.RealSense.Device)
extern void DeviceList_Contains_mC38BF50157E6379197530E190A1B4D6B70BEE8FB (void);
// 0x0000017C System.Void Intel.RealSense.DeviceList::.cctor()
extern void DeviceList__cctor_m303ACE71AEC85F9AD0306EA8CCA24DF70B8846C6 (void);
// 0x0000017D Intel.RealSense.Device[] Intel.RealSense.DeviceList/DeviceListDebugView::get_Items()
extern void DeviceListDebugView_get_Items_mBDE77180F67F2CA525EA704C5A8613E1FB74DFE1 (void);
// 0x0000017E System.Void Intel.RealSense.DeviceList/DeviceListDebugView::.ctor(Intel.RealSense.DeviceList)
extern void DeviceListDebugView__ctor_m01883A69B3CFD68114F9582C18A60798E0BFA1C7 (void);
// 0x0000017F System.Void Intel.RealSense.DeviceList/<GetEnumerator>d__3::.ctor(System.Int32)
extern void U3CGetEnumeratorU3Ed__3__ctor_m16FF6E0BC9C85E243F3CF238D8DA07F1F4AB7792 (void);
// 0x00000180 System.Void Intel.RealSense.DeviceList/<GetEnumerator>d__3::System.IDisposable.Dispose()
extern void U3CGetEnumeratorU3Ed__3_System_IDisposable_Dispose_m516ED126705C021E7F5E953D77F6AAD109A07E7A (void);
// 0x00000181 System.Boolean Intel.RealSense.DeviceList/<GetEnumerator>d__3::MoveNext()
extern void U3CGetEnumeratorU3Ed__3_MoveNext_m727931AFCBACE906FFE76955C0CC85A79487E10D (void);
// 0x00000182 Intel.RealSense.Device Intel.RealSense.DeviceList/<GetEnumerator>d__3::System.Collections.Generic.IEnumerator<Intel.RealSense.Device>.get_Current()
extern void U3CGetEnumeratorU3Ed__3_System_Collections_Generic_IEnumeratorU3CIntel_RealSense_DeviceU3E_get_Current_m7C8DFB85BCBEF9F30B94C88E1978F7E6FF894F88 (void);
// 0x00000183 System.Void Intel.RealSense.DeviceList/<GetEnumerator>d__3::System.Collections.IEnumerator.Reset()
extern void U3CGetEnumeratorU3Ed__3_System_Collections_IEnumerator_Reset_m017CE480F6AE8AC7462375EE233D560CBDAA0F00 (void);
// 0x00000184 System.Object Intel.RealSense.DeviceList/<GetEnumerator>d__3::System.Collections.IEnumerator.get_Current()
extern void U3CGetEnumeratorU3Ed__3_System_Collections_IEnumerator_get_Current_m8D861BFA7CF51375CFBF4505FDB635F7B4DFB52D (void);
// 0x00000185 System.Void Intel.RealSense.PlaybackDevice::.ctor(System.IntPtr)
extern void PlaybackDevice__ctor_m263397325CCEB8901707E3766A9000429EF3E227 (void);
// 0x00000186 Intel.RealSense.PlaybackDevice Intel.RealSense.PlaybackDevice::FromDevice(Intel.RealSense.Device)
extern void PlaybackDevice_FromDevice_m7186A018E1A5FA9E468D4B03E7C60D89FEF69302 (void);
// 0x00000187 System.String Intel.RealSense.PlaybackDevice::get_FileName()
extern void PlaybackDevice_get_FileName_mFB0063573BE832327A693D437EB656A323F9DAE2 (void);
// 0x00000188 System.Void Intel.RealSense.PlaybackDevice::set_FileName(System.String)
extern void PlaybackDevice_set_FileName_mD8E562F9DC4BE1721784D44AFED8065240B673B8 (void);
// 0x00000189 System.Void Intel.RealSense.PlaybackDevice::Pause()
extern void PlaybackDevice_Pause_m17654D56D8C5B9D44356EC23DF0443D5A9960439 (void);
// 0x0000018A System.Void Intel.RealSense.PlaybackDevice::Resume()
extern void PlaybackDevice_Resume_mC7174472C0EDCBCE5A88AEE2D453A759FC21A5EF (void);
// 0x0000018B System.Void Intel.RealSense.PlaybackDevice::Stop()
extern void PlaybackDevice_Stop_mA2CC6F1A3574FBBB2BEF14909FC130D43FCB91F2 (void);
// 0x0000018C Intel.RealSense.PlaybackStatus Intel.RealSense.PlaybackDevice::get_Status()
extern void PlaybackDevice_get_Status_m42D53B1A05AB31E9F6F1A207C702A02F0E9EBB43 (void);
// 0x0000018D System.UInt64 Intel.RealSense.PlaybackDevice::get_Duration()
extern void PlaybackDevice_get_Duration_m6B3B9CF306238D81B123BC98D618788367838D3D (void);
// 0x0000018E System.UInt64 Intel.RealSense.PlaybackDevice::get_Position()
extern void PlaybackDevice_get_Position_m0C05C94ECA246086C3155E864F667BC8FA7A25A4 (void);
// 0x0000018F System.Void Intel.RealSense.PlaybackDevice::set_Position(System.UInt64)
extern void PlaybackDevice_set_Position_m8651C9A703FC6A36CE6A560A6FC07EC74380F3E5 (void);
// 0x00000190 System.Void Intel.RealSense.PlaybackDevice::Seek(System.Int64)
extern void PlaybackDevice_Seek_m5FF2B50FEB656D4172F153773BF889687B8C7440 (void);
// 0x00000191 System.Boolean Intel.RealSense.PlaybackDevice::get_Realtime()
extern void PlaybackDevice_get_Realtime_mF3D71F1FB89022207D4EE1E424DD202DE67C82E8 (void);
// 0x00000192 System.Void Intel.RealSense.PlaybackDevice::set_Realtime(System.Boolean)
extern void PlaybackDevice_set_Realtime_m633F6C9C15556718E6BD9439022ED09E73898657 (void);
// 0x00000193 System.Void Intel.RealSense.PlaybackDevice::SetSpeed(System.Single)
extern void PlaybackDevice_SetSpeed_mC6CCA3DD48CD06FAF3CAA91DB6D0199DA6C932FF (void);
// 0x00000194 System.Void Intel.RealSense.RecordDevice::.ctor(System.IntPtr)
extern void RecordDevice__ctor_mC215956B8F1AEEA6F80BA1DB961E6690E3508004 (void);
// 0x00000195 System.IntPtr Intel.RealSense.RecordDevice::Create(Intel.RealSense.Device,System.String)
extern void RecordDevice_Create_m9AE62CF79AF8AA1778AD2BBD7EBB573EAF296D78 (void);
// 0x00000196 System.Void Intel.RealSense.RecordDevice::.ctor(Intel.RealSense.Device,System.String)
extern void RecordDevice__ctor_m792AD82750D2BD51AECBD0F23C90B9F2B9F7E78C (void);
// 0x00000197 Intel.RealSense.RecordDevice Intel.RealSense.RecordDevice::FromDevice(Intel.RealSense.Device)
extern void RecordDevice_FromDevice_m7D5DC6A4B6EE81420B819B5F0B81F8F1A0786541 (void);
// 0x00000198 System.Void Intel.RealSense.RecordDevice::Pause()
extern void RecordDevice_Pause_mF50FD389564E5F9A1057509BEF63019514AA9537 (void);
// 0x00000199 System.Void Intel.RealSense.RecordDevice::Resume()
extern void RecordDevice_Resume_m2361AF0DDCBE49958ECE4350ED6B01C948CF8B28 (void);
// 0x0000019A System.String Intel.RealSense.RecordDevice::get_FileName()
extern void RecordDevice_get_FileName_mC9D78696835F27CACFE12C65FD1E1E46E6FA315F (void);
// 0x0000019B System.IntPtr Intel.RealSense.SoftwareDevice::CreateSoftwareDevice()
extern void SoftwareDevice_CreateSoftwareDevice_mB8D5404F5A0349635F2243AF22718C51DBFB89B9 (void);
// 0x0000019C System.Void Intel.RealSense.SoftwareDevice::.ctor()
extern void SoftwareDevice__ctor_mF6AD88E490BC26DA60BB414482C6406C180F4DAE (void);
// 0x0000019D Intel.RealSense.SoftwareSensor Intel.RealSense.SoftwareDevice::AddSensor(System.String)
extern void SoftwareDevice_AddSensor_m6EC45E73C338A442F289B8156EED0A3713C9E15D (void);
// 0x0000019E System.Void Intel.RealSense.SoftwareDevice::AddTo(Intel.RealSense.Context)
extern void SoftwareDevice_AddTo_m98A529AA76EE772A013BBBA2EA053CEC53834A60 (void);
// 0x0000019F System.Void Intel.RealSense.SoftwareDevice::SetMatcher(Intel.RealSense.Matchers)
extern void SoftwareDevice_SetMatcher_m81D92CDED174CB5A99374045014BA360C2D2CBCB (void);
// 0x000001A0 System.IntPtr Intel.RealSense.SoftwareDevice::AddSoftwareSensor(System.String)
extern void SoftwareDevice_AddSoftwareSensor_m918A443A8F39856507D0A62F71D3DF94A0A2E265 (void);
// 0x000001A1 System.Void Intel.RealSense.UpdatableDevice::.ctor(System.IntPtr)
extern void UpdatableDevice__ctor_m0CA135160BE26408D0A03AD568649B61D8AD799E (void);
// 0x000001A2 Intel.RealSense.UpdatableDevice Intel.RealSense.UpdatableDevice::FromDevice(Intel.RealSense.Device)
extern void UpdatableDevice_FromDevice_m1FFBA9E2407E374C536C8A3B088FE0262B9E2ABA (void);
// 0x000001A3 System.Void Intel.RealSense.UpdatableDevice::EnterUpdateState()
extern void UpdatableDevice_EnterUpdateState_m329ECC2FAC1636512DA67E5947316299DC35DD85 (void);
// 0x000001A4 System.Byte[] Intel.RealSense.UpdatableDevice::CreateFlashBackup()
extern void UpdatableDevice_CreateFlashBackup_mDBF8F4BFEA15EFC96D7C9287086F3B5C440E8C25 (void);
// 0x000001A5 System.Void Intel.RealSense.UpdatableDevice::add_OnFlashBackupProgress(Intel.RealSense.UpdatableDevice/OnFlashBackupProgressDelegate)
extern void UpdatableDevice_add_OnFlashBackupProgress_mAE098253DA984BC99474F6F0369E82F42CCA5D6A (void);
// 0x000001A6 System.Void Intel.RealSense.UpdatableDevice::remove_OnFlashBackupProgress(Intel.RealSense.UpdatableDevice/OnFlashBackupProgressDelegate)
extern void UpdatableDevice_remove_OnFlashBackupProgress_m89679A302055B3C7CD699256B4870C5CD9C1E131 (void);
// 0x000001A7 System.Void Intel.RealSense.UpdatableDevice::OnFlashBackupProgressInternal(System.Single,System.IntPtr)
extern void UpdatableDevice_OnFlashBackupProgressInternal_m3D801930A7F2F71A263AA7E138C7364AF50D2973 (void);
// 0x000001A8 System.Boolean Intel.RealSense.UpdatableDevice::CheckFirmwareCompatibility()
extern void UpdatableDevice_CheckFirmwareCompatibility_m5FD4D7470CC84425F3162DEC0EB3850C8F531675 (void);
// 0x000001A9 System.Void Intel.RealSense.UpdatableDevice/OnFlashBackupProgressDelegate::.ctor(System.Object,System.IntPtr)
extern void OnFlashBackupProgressDelegate__ctor_mCC3BBB368BC92DF5BEC56FAC96571F950D2ED770 (void);
// 0x000001AA System.Void Intel.RealSense.UpdatableDevice/OnFlashBackupProgressDelegate::Invoke(System.Single)
extern void OnFlashBackupProgressDelegate_Invoke_mFEE7A556649A27E3F628C3245C953DF08359180D (void);
// 0x000001AB System.IAsyncResult Intel.RealSense.UpdatableDevice/OnFlashBackupProgressDelegate::BeginInvoke(System.Single,System.AsyncCallback,System.Object)
extern void OnFlashBackupProgressDelegate_BeginInvoke_m209435A12EF2D22E847F13362B3C266500D641FD (void);
// 0x000001AC System.Void Intel.RealSense.UpdatableDevice/OnFlashBackupProgressDelegate::EndInvoke(System.IAsyncResult)
extern void OnFlashBackupProgressDelegate_EndInvoke_mA9A994BCA4308CA4397F797556AE29249A3BBBD4 (void);
// 0x000001AD System.Void Intel.RealSense.UpdateDevice::.ctor(System.IntPtr)
extern void UpdateDevice__ctor_mD2BA25A9C661465FCC81FF8E01C79ADD0CB71D8E (void);
// 0x000001AE Intel.RealSense.UpdateDevice Intel.RealSense.UpdateDevice::FromDevice(Intel.RealSense.Device)
extern void UpdateDevice_FromDevice_m033FD8B7B7EB4C11506407C7F01865FB59AEB102 (void);
// 0x000001AF System.Void Intel.RealSense.UpdateDevice::Update(System.Byte[])
extern void UpdateDevice_Update_mDDCF88702305D1076435498EE77E2922C30C07BC (void);
// 0x000001B0 System.Void Intel.RealSense.UpdateDevice::add_OnUpdateProgress(Intel.RealSense.UpdateDevice/OnUpdateProgressDelegate)
extern void UpdateDevice_add_OnUpdateProgress_m6699218939DE9DDB1D274A67D752787268F5E345 (void);
// 0x000001B1 System.Void Intel.RealSense.UpdateDevice::remove_OnUpdateProgress(Intel.RealSense.UpdateDevice/OnUpdateProgressDelegate)
extern void UpdateDevice_remove_OnUpdateProgress_m99B439BB5D3058B790EA09A879B98A9189975C81 (void);
// 0x000001B2 System.Void Intel.RealSense.UpdateDevice::OnUpdateProgressInternal(System.Single,System.IntPtr)
extern void UpdateDevice_OnUpdateProgressInternal_mFEA507B42632EEB2425B56A989F8BCC850B6DA44 (void);
// 0x000001B3 System.Void Intel.RealSense.UpdateDevice/OnUpdateProgressDelegate::.ctor(System.Object,System.IntPtr)
extern void OnUpdateProgressDelegate__ctor_m2C894C7018BAD9B77D8C449049089E3BF455BE1F (void);
// 0x000001B4 System.Void Intel.RealSense.UpdateDevice/OnUpdateProgressDelegate::Invoke(System.Single)
extern void OnUpdateProgressDelegate_Invoke_m0E06A4D392B0DF46567CA6DE74AC5FA49328C68D (void);
// 0x000001B5 System.IAsyncResult Intel.RealSense.UpdateDevice/OnUpdateProgressDelegate::BeginInvoke(System.Single,System.AsyncCallback,System.Object)
extern void OnUpdateProgressDelegate_BeginInvoke_m90471DFCB69EA0B490AB3EB26FC8F4237DCD0BDA (void);
// 0x000001B6 System.Void Intel.RealSense.UpdateDevice/OnUpdateProgressDelegate::EndInvoke(System.IAsyncResult)
extern void OnUpdateProgressDelegate_EndInvoke_mFD46959FE5D23EF555E271FB058A7A1DF88E0344 (void);
// 0x000001B7 System.Void Intel.RealSense.FirmwareLogsDevice::.ctor(System.IntPtr)
extern void FirmwareLogsDevice__ctor_m7A54F879EB7320D7C147D4CC6C1156AE51F08BEE (void);
// 0x000001B8 Intel.RealSense.FirmwareLogsDevice Intel.RealSense.FirmwareLogsDevice::FromDevice(Intel.RealSense.Device)
extern void FirmwareLogsDevice_FromDevice_m7D845EE21F8014F650FA91A9F37BDBC30C24DD43 (void);
// 0x000001B9 Intel.RealSense.FwLog Intel.RealSense.FirmwareLogsDevice::CreateFwLog()
extern void FirmwareLogsDevice_CreateFwLog_m323B1DE5EF0E5F02627390F79D679AB69AE38579 (void);
// 0x000001BA Intel.RealSense.FwParsedLog Intel.RealSense.FirmwareLogsDevice::CreateFwParsedLog()
extern void FirmwareLogsDevice_CreateFwParsedLog_m406E6B439ED6B7D28D5D651538F65748C520195D (void);
// 0x000001BB System.UInt32 Intel.RealSense.FirmwareLogsDevice::GetNumberOfFwLogs()
extern void FirmwareLogsDevice_GetNumberOfFwLogs_m0DFBC4E9E8446912133EE4BB8891BD0B20EDF8CC (void);
// 0x000001BC System.Boolean Intel.RealSense.FirmwareLogsDevice::GetFwLog(Intel.RealSense.FwLog&)
extern void FirmwareLogsDevice_GetFwLog_mF6828678377154C339D922E5EF0D7E08BFDC7E61 (void);
// 0x000001BD System.Boolean Intel.RealSense.FirmwareLogsDevice::GetFlashLog(Intel.RealSense.FwLog&)
extern void FirmwareLogsDevice_GetFlashLog_m4925C6B7BC15396AD1BB9EA9AE68BB60013B13FD (void);
// 0x000001BE System.Boolean Intel.RealSense.FirmwareLogsDevice::InitParser(System.String)
extern void FirmwareLogsDevice_InitParser_m3F0CE921E505EFFE8EEB7FF40838286A43ADC7AB (void);
// 0x000001BF System.Boolean Intel.RealSense.FirmwareLogsDevice::ParseFwLog(Intel.RealSense.FwLog,Intel.RealSense.FwParsedLog&)
extern void FirmwareLogsDevice_ParseFwLog_mA9009331D28C9D2CDA41A170EB2EECF25D31AEDC (void);
// 0x000001C0 System.Void Intel.RealSense.ProxyDevice::.ctor(System.IntPtr)
extern void ProxyDevice__ctor_m644F32C594704D22E3E09C72DB65D8CCD983D5E3 (void);
// 0x000001C1 System.Void Intel.RealSense.DepthFrame::.ctor(System.IntPtr)
extern void DepthFrame__ctor_m7D7EDF8F28152998F95E2A24FBDB54F2B9154543 (void);
// 0x000001C2 System.Single Intel.RealSense.DepthFrame::GetDistance(System.Int32,System.Int32)
extern void DepthFrame_GetDistance_m825158CE01CC20EB56B68C8998F2519CAA4D1988 (void);
// 0x000001C3 System.Single Intel.RealSense.DepthFrame::GetUnits()
extern void DepthFrame_GetUnits_m1124CD209CCD6641ED639D2EB68960D0E2776B80 (void);
// 0x000001C4 System.Void Intel.RealSense.Frame::Initialize()
extern void Frame_Initialize_m9E603330A0254F20639F995C11AFA2BA9A2E51F2 (void);
// 0x000001C5 System.Void Intel.RealSense.Frame::.ctor(System.IntPtr)
extern void Frame__ctor_m7EC7D543E371F11B9F3210B3DB7B34646EEDDE4C (void);
// 0x000001C6 Intel.RealSense.Frame Intel.RealSense.Frame::Create(System.IntPtr)
extern void Frame_Create_mE2C4F43A4411DCABD43D91119E31268C88404978 (void);
// 0x000001C7 T Intel.RealSense.Frame::Create(System.IntPtr)
// 0x000001C8 T Intel.RealSense.Frame::Create(Intel.RealSense.Frame)
// 0x000001C9 System.Boolean Intel.RealSense.Frame::Is(Intel.RealSense.Extension)
extern void Frame_Is_mA9198A531E7208F6252C5518D087B3A84A6791B5 (void);
// 0x000001CA T Intel.RealSense.Frame::As()
// 0x000001CB T Intel.RealSense.Frame::Cast()
// 0x000001CC Intel.RealSense.Frame Intel.RealSense.Frame::Clone()
extern void Frame_Clone_mF83058E72A3E9821744A3036BB8381FAC9C4E314 (void);
// 0x000001CD System.Void Intel.RealSense.Frame::Keep()
extern void Frame_Keep_m1FD46C819F406B19F92A57A2A43DB452CA152767 (void);
// 0x000001CE System.Boolean Intel.RealSense.Frame::get_IsComposite()
extern void Frame_get_IsComposite_m648C8E9938F4DB3573D36DAA99804E79677F656E (void);
// 0x000001CF System.Int32 Intel.RealSense.Frame::get_DataSize()
extern void Frame_get_DataSize_mAA1E18F42CD4C814DA51BE35895617AD46E70A7B (void);
// 0x000001D0 System.IntPtr Intel.RealSense.Frame::get_Data()
extern void Frame_get_Data_m389421824EE87DA80C90E7FB114E661CD517C31B (void);
// 0x000001D1 T Intel.RealSense.Frame::GetProfile()
// 0x000001D2 Intel.RealSense.StreamProfile Intel.RealSense.Frame::get_Profile()
extern void Frame_get_Profile_m8F043F19E1A21F9B7CF8F4F7320AD490AEFFA07A (void);
// 0x000001D3 System.UInt64 Intel.RealSense.Frame::get_Number()
extern void Frame_get_Number_mD1FD25DE73D0A80143DA0DD821721270114AC239 (void);
// 0x000001D4 System.Double Intel.RealSense.Frame::get_Timestamp()
extern void Frame_get_Timestamp_mAF87441277560E5072750CF5811082D5580D2995 (void);
// 0x000001D5 Intel.RealSense.Sensor Intel.RealSense.Frame::get_Sensor()
extern void Frame_get_Sensor_m63C61D6D61BF41ACE2B17ED5B5924E3E2BC63B43 (void);
// 0x000001D6 Intel.RealSense.TimestampDomain Intel.RealSense.Frame::get_TimestampDomain()
extern void Frame_get_TimestampDomain_mB8BF2A9AB6AF441DB536E6D65AE46684F5CE54BF (void);
// 0x000001D7 System.Int64 Intel.RealSense.Frame::get_Item(Intel.RealSense.FrameMetadataValue)
extern void Frame_get_Item_m56BF9AF44D8D68FA776B60EF7B6BBACC3D1F0E9E (void);
// 0x000001D8 System.Int64 Intel.RealSense.Frame::GetFrameMetadata(Intel.RealSense.FrameMetadataValue)
extern void Frame_GetFrameMetadata_mB0DD97BB4CEF19B5E14235C763427524916E400B (void);
// 0x000001D9 System.Boolean Intel.RealSense.Frame::SupportsFrameMetaData(Intel.RealSense.FrameMetadataValue)
extern void Frame_SupportsFrameMetaData_m43EBC3D2929E609E2462F542CCC4FC7E272D6D35 (void);
// 0x000001DA System.Void Intel.RealSense.Frame::.cctor()
extern void Frame__cctor_mE1CE375C7DA96353D260120F092A8EC45B40B5A7 (void);
// 0x000001DB System.Void Intel.RealSense.FrameQueue::.ctor(System.Int32)
extern void FrameQueue__ctor_m477645F5D4625D6724530C9B38E444FC1973DFC6 (void);
// 0x000001DC System.Int32 Intel.RealSense.FrameQueue::get_Capacity()
extern void FrameQueue_get_Capacity_mFFFEDB439282B1CD98CBB10BD131736C7B4AD143 (void);
// 0x000001DD System.Void Intel.RealSense.FrameQueue::set_Capacity(System.Int32)
extern void FrameQueue_set_Capacity_m398AF4F857410EDABD1AD08A48580494C7DB90B8 (void);
// 0x000001DE System.Boolean Intel.RealSense.FrameQueue::PollForFrame(T&)
// 0x000001DF Intel.RealSense.Frame Intel.RealSense.FrameQueue::WaitForFrame(System.UInt32)
extern void FrameQueue_WaitForFrame_mC2C5406889EFFB8568BFB15A3BBFEE374E6338A3 (void);
// 0x000001E0 T Intel.RealSense.FrameQueue::WaitForFrame(System.UInt32)
// 0x000001E1 System.Boolean Intel.RealSense.FrameQueue::TryWaitForFrame(T&,System.UInt32)
// 0x000001E2 Intel.RealSense.FrameSet Intel.RealSense.FrameQueue::WaitForFrames(System.UInt32)
extern void FrameQueue_WaitForFrames_mA78800DDFBDAF5DB64639C21F5E4AC01A711914A (void);
// 0x000001E3 System.Void Intel.RealSense.FrameQueue::Enqueue(Intel.RealSense.Frame)
extern void FrameQueue_Enqueue_mF4EC82B1FD7C8CD68092809093D1ED92455BB969 (void);
// 0x000001E4 System.Int32 Intel.RealSense.FrameQueue::QueueSize()
extern void FrameQueue_QueueSize_mB89295AC3670BC064E40D11CBCED3268DB389DE1 (void);
// 0x000001E5 System.IntPtr Intel.RealSense.FrameQueue::Create(System.Int32)
extern void FrameQueue_Create_m8D5352017DB7C4278303ADF85DB39979433D74F7 (void);
// 0x000001E6 Intel.RealSense.FrameSet Intel.RealSense.FrameSet::FromFrame(Intel.RealSense.Frame)
extern void FrameSet_FromFrame_mC4D8FB99205027B10D6E2EEE16F9326D03DAD854 (void);
// 0x000001E7 Intel.RealSense.FrameSet Intel.RealSense.FrameSet::FromFrame(Intel.RealSense.Frame,Intel.RealSense.FramesReleaser)
extern void FrameSet_FromFrame_m2DEA65EB2E96F5ACA9AECA2CA2BBF964F23F3B7B (void);
// 0x000001E8 System.Void Intel.RealSense.FrameSet::Initialize()
extern void FrameSet_Initialize_m0861739B7347DE375FBF5432C4428E0CD75E155B (void);
// 0x000001E9 System.Void Intel.RealSense.FrameSet::.ctor(System.IntPtr)
extern void FrameSet__ctor_mEFB45B62B1E09E1E7FE8C4CA2FBC7A9D928B6E42 (void);
// 0x000001EA System.Boolean Intel.RealSense.FrameSet::get_IsComposite()
extern void FrameSet_get_IsComposite_m1B2003D595D88401F51A2A78289AB827F9680229 (void);
// 0x000001EB Intel.RealSense.Frame Intel.RealSense.FrameSet::AsFrame()
extern void FrameSet_AsFrame_m5CB3564BB0AA874F5ABF5A5C7ECC559881CFFDAA (void);
// 0x000001EC System.Void Intel.RealSense.FrameSet::ForEach(System.Action`1<Intel.RealSense.Frame>)
extern void FrameSet_ForEach_mE35096BFCD425ADFA806DE4BD888C59C25551FEB (void);
// 0x000001ED T Intel.RealSense.FrameSet::FirstOrDefault(Intel.RealSense.Stream,Intel.RealSense.Format)
// 0x000001EE Intel.RealSense.Frame Intel.RealSense.FrameSet::FirstOrDefault(Intel.RealSense.Stream,Intel.RealSense.Format)
extern void FrameSet_FirstOrDefault_m05098D277897D852E3957E431373CB10ABC82542 (void);
// 0x000001EF T Intel.RealSense.FrameSet::FirstOrDefault(System.Predicate`1<T>)
// 0x000001F0 T Intel.RealSense.FrameSet::First(Intel.RealSense.Stream,Intel.RealSense.Format)
// 0x000001F1 Intel.RealSense.Frame Intel.RealSense.FrameSet::First(Intel.RealSense.Stream,Intel.RealSense.Format)
extern void FrameSet_First_mA554E6FE80EAFB3FD9464B06269C6DC12D5B1EDA (void);
// 0x000001F2 Intel.RealSense.DepthFrame Intel.RealSense.FrameSet::get_DepthFrame()
extern void FrameSet_get_DepthFrame_m12E45B244B4CB2D57ABE2201D21F17F833FAD377 (void);
// 0x000001F3 Intel.RealSense.VideoFrame Intel.RealSense.FrameSet::get_ColorFrame()
extern void FrameSet_get_ColorFrame_m01326230E137DCDDD8D22BA27756290A5661903D (void);
// 0x000001F4 Intel.RealSense.VideoFrame Intel.RealSense.FrameSet::get_InfraredFrame()
extern void FrameSet_get_InfraredFrame_mB55523FF3B3D51A0A0B980AA5F829AE887DBA63D (void);
// 0x000001F5 Intel.RealSense.VideoFrame Intel.RealSense.FrameSet::get_FishEyeFrame()
extern void FrameSet_get_FishEyeFrame_m62E2BED022E97281F44644A8D01D5B8416D87BC0 (void);
// 0x000001F6 Intel.RealSense.PoseFrame Intel.RealSense.FrameSet::get_PoseFrame()
extern void FrameSet_get_PoseFrame_m41AF437B8B1DCB5906929434FA8913EFA9D574EB (void);
// 0x000001F7 System.Collections.Generic.IEnumerator`1<Intel.RealSense.Frame> Intel.RealSense.FrameSet::GetEnumerator()
extern void FrameSet_GetEnumerator_mFAA8F1E47A721FB5DFA558F03EDD07C5E8134982 (void);
// 0x000001F8 System.Collections.IEnumerator Intel.RealSense.FrameSet::System.Collections.IEnumerable.GetEnumerator()
extern void FrameSet_System_Collections_IEnumerable_GetEnumerator_m1924C92F96C3CADB51FCFFCAE0E9A04AC86984C9 (void);
// 0x000001F9 System.Int32 Intel.RealSense.FrameSet::get_Count()
extern void FrameSet_get_Count_mC01C9A4D4FFEB2F08BAA41DC7E03D09EB11DAF1D (void);
// 0x000001FA Intel.RealSense.Frame Intel.RealSense.FrameSet::get_Item(System.Int32)
extern void FrameSet_get_Item_mB4B5CFB225EB97A71D1ADCE2D7EA48DA75D38223 (void);
// 0x000001FB Intel.RealSense.Frame Intel.RealSense.FrameSet::get_Item(Intel.RealSense.Stream,System.Int32)
extern void FrameSet_get_Item_m3DBF27AF34A951104B36499557D8588B119D67F9 (void);
// 0x000001FC Intel.RealSense.Frame Intel.RealSense.FrameSet::get_Item(Intel.RealSense.Stream,Intel.RealSense.Format,System.Int32)
extern void FrameSet_get_Item_mF65495A453CF768F234582D0BFE81E286198BE79 (void);
// 0x000001FD Intel.RealSense.FrameSet Intel.RealSense.FrameSet::Create(System.IntPtr)
extern void FrameSet_Create_mFDFACBE56F74917252F72157FDAACC499A94AC98 (void);
// 0x000001FE System.Void Intel.RealSense.FrameSet::Dispose(System.Boolean)
extern void FrameSet_Dispose_mDC694706686B799F6828B565514A47830C597954 (void);
// 0x000001FF System.Void Intel.RealSense.FrameSet::AddDisposable(System.IDisposable)
extern void FrameSet_AddDisposable_mC3E10585D9D436801150A5B2FFF4465DD073682B (void);
// 0x00000200 System.Void Intel.RealSense.FrameSet/Enumerator::.ctor(Intel.RealSense.FrameSet)
extern void Enumerator__ctor_m23AB5DC802E77937A14F266BBC048E7963E2CCDC (void);
// 0x00000201 Intel.RealSense.Frame Intel.RealSense.FrameSet/Enumerator::get_Current()
extern void Enumerator_get_Current_m818F5B94FF36A570824FD32F3F98D604DFFCEAF2 (void);
// 0x00000202 System.Object Intel.RealSense.FrameSet/Enumerator::System.Collections.IEnumerator.get_Current()
extern void Enumerator_System_Collections_IEnumerator_get_Current_m0480922637C3AC23AA88886A6A0C85253DD50D8A (void);
// 0x00000203 System.Void Intel.RealSense.FrameSet/Enumerator::Dispose()
extern void Enumerator_Dispose_m2BF15DCBA7149637F7C0F696FD445E1F9DF7DED0 (void);
// 0x00000204 System.Boolean Intel.RealSense.FrameSet/Enumerator::MoveNext()
extern void Enumerator_MoveNext_m3BE07BB85C18FF6F221927261DA42EB1005FA306 (void);
// 0x00000205 System.Void Intel.RealSense.FrameSet/Enumerator::Reset()
extern void Enumerator_Reset_m47A51CDD4D243303CD3E2FB2841EF1C99D5564E4 (void);
// 0x00000206 System.Void Intel.RealSense.FrameSet/<>c__DisplayClass33_0::.ctor()
extern void U3CU3Ec__DisplayClass33_0__ctor_mDFC43F5E9FCF4867AEB955D0A3F793E86904C08B (void);
// 0x00000207 System.Boolean Intel.RealSense.FrameSet/<>c__DisplayClass33_0::<get_Item>b__0(Intel.RealSense.Frame)
extern void U3CU3Ec__DisplayClass33_0_U3Cget_ItemU3Eb__0_m5C4CF67B4ABA104B84C82BF38D2B53929B7736A0 (void);
// 0x00000208 System.Void Intel.RealSense.FrameSet/<>c__DisplayClass35_0::.ctor()
extern void U3CU3Ec__DisplayClass35_0__ctor_m83CE77B7AB69A84BC3913407D97BAF8E2E0322AC (void);
// 0x00000209 System.Boolean Intel.RealSense.FrameSet/<>c__DisplayClass35_0::<get_Item>b__0(Intel.RealSense.Frame)
extern void U3CU3Ec__DisplayClass35_0_U3Cget_ItemU3Eb__0_m444D9C2E3C673436C91C5F093A20A87A424456F3 (void);
// 0x0000020A System.Void Intel.RealSense.FrameSet/<>c::.cctor()
extern void U3CU3Ec__cctor_m387C326EDBB7BA04A921130007644DDA0819CCF7 (void);
// 0x0000020B System.Void Intel.RealSense.FrameSet/<>c::.ctor()
extern void U3CU3Ec__ctor_m1C77F8414FDB1E5D498D2EF80E7C2AC362BFC8C5 (void);
// 0x0000020C System.Void Intel.RealSense.FrameSet/<>c::<Dispose>b__37_0(System.IDisposable)
extern void U3CU3Ec_U3CDisposeU3Eb__37_0_m56E6336C0281AEDF95A3470265815260121708D4 (void);
// 0x0000020D Intel.RealSense.FrameSet Intel.RealSense.FrameSetExtensions::AsFrameSet(Intel.RealSense.Frame)
extern void FrameSetExtensions_AsFrameSet_mB974C537911B6C1D620E5A3E3B77EBC6F2C152C2 (void);
// 0x0000020E T Intel.RealSense.FramesReleaser::ScopedReturn(Intel.RealSense.FramesReleaser,T)
// 0x0000020F System.Void Intel.RealSense.FramesReleaser::AddDisposable(System.IDisposable)
extern void FramesReleaser_AddDisposable_mFA2A5CE23F6DF78AD64D0B54AE56521D4EBA528F (void);
// 0x00000210 System.Void Intel.RealSense.FramesReleaser::Dispose(System.Boolean)
extern void FramesReleaser_Dispose_m5B3C4C9189B507B26DC44D302EB4FE051DA17AEF (void);
// 0x00000211 System.Void Intel.RealSense.FramesReleaser::Finalize()
extern void FramesReleaser_Finalize_mBBEC3F8E1A7967183C6C2DF807A94FBA5022D4D7 (void);
// 0x00000212 System.Void Intel.RealSense.FramesReleaser::Dispose()
extern void FramesReleaser_Dispose_m24C733FB11C1B588283B4DC1F1F1CAFFE585BAC1 (void);
// 0x00000213 System.Void Intel.RealSense.FramesReleaser::.ctor()
extern void FramesReleaser__ctor_m06792F439AC8E28255405A9AE9E0F4222FC551DB (void);
// 0x00000214 System.Void Intel.RealSense.FramesReleaser/<>c::.cctor()
extern void U3CU3Ec__cctor_m7576D0A6DE249ADDBB0E5E48ABA8FCDE643EF819 (void);
// 0x00000215 System.Void Intel.RealSense.FramesReleaser/<>c::.ctor()
extern void U3CU3Ec__ctor_mF2A3E9980568AFFACAC2B6FF12CEC3EF01852F55 (void);
// 0x00000216 System.Void Intel.RealSense.FramesReleaser/<>c::<Dispose>b__4_0(System.IDisposable)
extern void U3CU3Ec_U3CDisposeU3Eb__4_0_m32C74F3133FA935EAC07F41AC169DED0A2DFB456 (void);
// 0x00000217 System.Void Intel.RealSense.Points::.ctor(System.IntPtr)
extern void Points__ctor_mF4A0450532CE6B985DA6B21A9159F1B53FAF065C (void);
// 0x00000218 System.Void Intel.RealSense.Points::Initialize()
extern void Points_Initialize_m07303241AF2253D943DFCF5D477A4B3D3AD595BE (void);
// 0x00000219 System.Int32 Intel.RealSense.Points::get_Count()
extern void Points_get_Count_m7550BD795EABB0B1BDABD721E7B64DC21C2E813D (void);
// 0x0000021A System.Void Intel.RealSense.Points::set_Count(System.Int32)
extern void Points_set_Count_m1A4C788DE39B6AF8435271D270C7BAF3932C1D16 (void);
// 0x0000021B System.IntPtr Intel.RealSense.Points::get_VertexData()
extern void Points_get_VertexData_m4AD8749BEF06C7F6279259D48D9F86F7AF31BC91 (void);
// 0x0000021C System.Void Intel.RealSense.Points::Copy(System.IntPtr,System.IntPtr,System.Int32)
// 0x0000021D System.Void Intel.RealSense.Points::CopyVertices(T[])
// 0x0000021E System.IntPtr Intel.RealSense.Points::get_TextureData()
extern void Points_get_TextureData_mA75F755AC9A888252CF4FD726503D5047F9A3B67 (void);
// 0x0000021F System.Void Intel.RealSense.Points::CopyTextureCoords(T[])
// 0x00000220 System.Void Intel.RealSense.Points::ExportToPLY(System.String,Intel.RealSense.Frame)
extern void Points_ExportToPLY_mCC582ED93437E1CB1508BC3703EB08ED6F2DA281 (void);
// 0x00000221 System.Void Intel.RealSense.VideoFrame::.ctor(System.IntPtr)
extern void VideoFrame__ctor_m10909C88DC824D7BF97407AC731203C491E400FF (void);
// 0x00000222 System.Int32 Intel.RealSense.VideoFrame::get_Width()
extern void VideoFrame_get_Width_m01912E71FEE2712DA83872C49C33009D30064268 (void);
// 0x00000223 System.Int32 Intel.RealSense.VideoFrame::get_Height()
extern void VideoFrame_get_Height_mA5E7858FD1B8C5A131C644774576A268C3B354F8 (void);
// 0x00000224 System.Int32 Intel.RealSense.VideoFrame::get_Stride()
extern void VideoFrame_get_Stride_m99437F231B6912F126497A2170A91B77058DFBA8 (void);
// 0x00000225 System.Int32 Intel.RealSense.VideoFrame::get_BitsPerPixel()
extern void VideoFrame_get_BitsPerPixel_m9A0A9B21F092D46504FA2752942486AD6EE2DFCE (void);
// 0x00000226 System.Void Intel.RealSense.VideoFrame::CopyTo(T[])
// 0x00000227 System.Void Intel.RealSense.VideoFrame::CopyTo(System.IntPtr)
extern void VideoFrame_CopyTo_m292A4842651205CDCEE1C8BBFCFF9060327083F5 (void);
// 0x00000228 System.Void Intel.RealSense.VideoFrame::CopyFrom(T[])
// 0x00000229 System.Void Intel.RealSense.VideoFrame::CopyFrom(System.IntPtr)
extern void VideoFrame_CopyFrom_m546BABFFE6138A4060D4B90F256505EAC6C999F4 (void);
// 0x0000022A System.Void Intel.RealSense.DisparityFrame::.ctor(System.IntPtr)
extern void DisparityFrame__ctor_m07129C0B418425F645F6512AA59C132FC13DE4B3 (void);
// 0x0000022B System.Single Intel.RealSense.DisparityFrame::get_Baseline()
extern void DisparityFrame_get_Baseline_m6555F64B181374CCE7A23AB1593C2E9180E5F8C4 (void);
// 0x0000022C System.Void Intel.RealSense.MotionFrame::.ctor(System.IntPtr)
extern void MotionFrame__ctor_m2BC08CAEFFED538A8211ACE09320058A1F19707F (void);
// 0x0000022D Intel.RealSense.Math.Vector Intel.RealSense.MotionFrame::get_MotionData()
extern void MotionFrame_get_MotionData_m544519D1C4A1BC88BEF63779964425D3E670B0BA (void);
// 0x0000022E System.Void Intel.RealSense.MotionFrame::CopyTo(System.Single[])
extern void MotionFrame_CopyTo_m44984B253947C2F0D1A1625D4731820363CEC027 (void);
// 0x0000022F System.Void Intel.RealSense.MotionFrame::CopyTo(T&)
// 0x00000230 System.Void Intel.RealSense.MotionFrame::CopyTo(T)
// 0x00000231 System.Void Intel.RealSense.PoseFrame::.ctor(System.IntPtr)
extern void PoseFrame__ctor_m96F23D9802A65B9F270AD2E78CAAB57FA9C759A9 (void);
// 0x00000232 Intel.RealSense.Pose Intel.RealSense.PoseFrame::get_PoseData()
extern void PoseFrame_get_PoseData_m358899D89BEB7FBCC81B15DB6745CBE16D35B05F (void);
// 0x00000233 System.Void Intel.RealSense.PoseFrame::CopyTo(T&)
// 0x00000234 System.Void Intel.RealSense.PoseFrame::CopyTo(T)
// 0x00000235 System.IntPtr Intel.RealSense.Config::Create()
extern void Config_Create_m667DA014A899677203659BABB931F1D673921C30 (void);
// 0x00000236 System.Void Intel.RealSense.Config::.ctor()
extern void Config__ctor_m3F246BE25D516D7FF7B80636D35826DE46DFF423 (void);
// 0x00000237 System.Void Intel.RealSense.Config::EnableStream(Intel.RealSense.Stream,System.Int32)
extern void Config_EnableStream_m320EE87B0F2C417B701790B10EFCD1907C33DB50 (void);
// 0x00000238 System.Void Intel.RealSense.Config::EnableStream(Intel.RealSense.Stream,System.Int32,System.Int32,System.Int32,Intel.RealSense.Format,System.Int32)
extern void Config_EnableStream_m324BFB969D9DD3B932EEA96FACFC5BAAFC3443D3 (void);
// 0x00000239 System.Void Intel.RealSense.Config::EnableStream(Intel.RealSense.Stream,System.Int32,System.Int32,Intel.RealSense.Format,System.Int32)
extern void Config_EnableStream_mC259D059519AE7D276D640B3BFCEB302DCE9A910 (void);
// 0x0000023A System.Void Intel.RealSense.Config::EnableStream(Intel.RealSense.Stream,Intel.RealSense.Format,System.Int32)
extern void Config_EnableStream_m18E6C7740460E8D8D8B884E0C676D267E9F2515F (void);
// 0x0000023B System.Void Intel.RealSense.Config::EnableStream(Intel.RealSense.Stream,System.Int32,Intel.RealSense.Format,System.Int32)
extern void Config_EnableStream_mF36B75D07BBC3514EB64ECE74B34D47645AC3885 (void);
// 0x0000023C System.Void Intel.RealSense.Config::EnableAllStreams()
extern void Config_EnableAllStreams_m1FAC992F7B91E34CB1904C0AD5E359CA386CE944 (void);
// 0x0000023D System.Void Intel.RealSense.Config::EnableDevice(System.String)
extern void Config_EnableDevice_m443031EF609180AACC13419B4E4B7492F32A32F2 (void);
// 0x0000023E System.Void Intel.RealSense.Config::EnableDeviceFromFile(System.String)
extern void Config_EnableDeviceFromFile_mE80F9C8AB39A7D18A4803C7F971B02372E6BF8ED (void);
// 0x0000023F System.Void Intel.RealSense.Config::EnableDeviceFromFile(System.String,System.Boolean)
extern void Config_EnableDeviceFromFile_m469595B0A8B7DA906326FA289CEA67A016CA2356 (void);
// 0x00000240 System.Void Intel.RealSense.Config::EnableRecordToFile(System.String)
extern void Config_EnableRecordToFile_m932DC43A2DACCE52B49A1D34B63F0DC26F833516 (void);
// 0x00000241 System.Void Intel.RealSense.Config::DisableStream(Intel.RealSense.Stream,System.Int32)
extern void Config_DisableStream_mD3B618D987C9C9F1340FF579E5D4AF3B9577496A (void);
// 0x00000242 System.Void Intel.RealSense.Config::DisableAllStreams()
extern void Config_DisableAllStreams_m8F9C1BBB35AF2D9630B3D38A543C854A94CE8ED7 (void);
// 0x00000243 System.Boolean Intel.RealSense.Config::CanResolve(Intel.RealSense.Pipeline)
extern void Config_CanResolve_m4CF60E49D64C5049945B01E30AFD6979AFC79053 (void);
// 0x00000244 Intel.RealSense.PipelineProfile Intel.RealSense.Config::Resolve(Intel.RealSense.Pipeline)
extern void Config_Resolve_mEBF4570843321D1DD507F7B537F47BDA8D284C64 (void);
// 0x00000245 System.IntPtr Intel.RealSense.Pipeline::Create(Intel.RealSense.Context)
extern void Pipeline_Create_m924A75EE6A555A41AEE7A08F2A1207385212984D (void);
// 0x00000246 System.IntPtr Intel.RealSense.Pipeline::Create()
extern void Pipeline_Create_m42B6027A8C41CD9D38A0D22832D341C276EE5792 (void);
// 0x00000247 System.Void Intel.RealSense.Pipeline::.ctor(Intel.RealSense.Context)
extern void Pipeline__ctor_m97EC9E399A7C7532907D51F25E3D6E71895DF9E5 (void);
// 0x00000248 System.Void Intel.RealSense.Pipeline::.ctor()
extern void Pipeline__ctor_mB26D36AA95DBE8030DF7695B3A21EB946648B794 (void);
// 0x00000249 Intel.RealSense.PipelineProfile Intel.RealSense.Pipeline::Start()
extern void Pipeline_Start_mEB081628F88C07B01662C7EC074B4049E318F000 (void);
// 0x0000024A Intel.RealSense.PipelineProfile Intel.RealSense.Pipeline::Start(Intel.RealSense.Config)
extern void Pipeline_Start_m70465DE73DAB473A322B4279D1C31115E5C2C5CE (void);
// 0x0000024B Intel.RealSense.PipelineProfile Intel.RealSense.Pipeline::Start(Intel.RealSense.FrameCallback)
extern void Pipeline_Start_m6355F1AF0632929FFA49EFC011C8643987673FEF (void);
// 0x0000024C Intel.RealSense.PipelineProfile Intel.RealSense.Pipeline::Start(Intel.RealSense.Config,Intel.RealSense.FrameCallback)
extern void Pipeline_Start_m7F1576FA13C18DC8EF9251F2E3562C9E48EF7055 (void);
// 0x0000024D System.Void Intel.RealSense.Pipeline::Stop()
extern void Pipeline_Stop_m39FC7E91A96BA526BC9911169417C7A2C5D1BE6F (void);
// 0x0000024E Intel.RealSense.FrameSet Intel.RealSense.Pipeline::WaitForFrames(System.UInt32)
extern void Pipeline_WaitForFrames_m9E9963C638C8AD3E35AE45BC5ECB28D2CC1543E8 (void);
// 0x0000024F System.Boolean Intel.RealSense.Pipeline::TryWaitForFrames(Intel.RealSense.FrameSet&,System.UInt32)
extern void Pipeline_TryWaitForFrames_m2A224A0DBBD313A71E4D17BBEB52363F308CAE3D (void);
// 0x00000250 System.Boolean Intel.RealSense.Pipeline::PollForFrames(Intel.RealSense.FrameSet&)
extern void Pipeline_PollForFrames_mE28FEEA7977C600AB625B47B303DEC7534D06529 (void);
// 0x00000251 Intel.RealSense.PipelineProfile Intel.RealSense.Pipeline::get_ActiveProfile()
extern void Pipeline_get_ActiveProfile_mC99DB95E780EBE71B067BA76873586E7D4E37C2D (void);
// 0x00000252 System.Void Intel.RealSense.Pipeline/<>c__DisplayClass7_0::.ctor()
extern void U3CU3Ec__DisplayClass7_0__ctor_m49703CF4DE1D508261935D9023409830A403816C (void);
// 0x00000253 System.Void Intel.RealSense.Pipeline/<>c__DisplayClass7_0::<Start>b__0(System.IntPtr,System.IntPtr)
extern void U3CU3Ec__DisplayClass7_0_U3CStartU3Eb__0_m833F367E42B185F117DE020437561ED804C6380D (void);
// 0x00000254 System.Void Intel.RealSense.Pipeline/<>c__DisplayClass8_0::.ctor()
extern void U3CU3Ec__DisplayClass8_0__ctor_mBC20DE3D0483D595C43A0D411D87A78827C7EB5D (void);
// 0x00000255 System.Void Intel.RealSense.Pipeline/<>c__DisplayClass8_0::<Start>b__0(System.IntPtr,System.IntPtr)
extern void U3CU3Ec__DisplayClass8_0_U3CStartU3Eb__0_mA10BA2BC12848857AD13180A8038ECD4668E9A73 (void);
// 0x00000256 System.Void Intel.RealSense.PipelineProfile::.ctor(System.IntPtr)
extern void PipelineProfile__ctor_m17794CC56B28A9ADEC3D2FC0BEDF7C3EEEEA5E18 (void);
// 0x00000257 Intel.RealSense.Device Intel.RealSense.PipelineProfile::get_Device()
extern void PipelineProfile_get_Device_m6F894CF699D4DD81124E8EA1B79BFFD3DA287AA3 (void);
// 0x00000258 System.Collections.ObjectModel.ReadOnlyCollection`1<Intel.RealSense.StreamProfile> Intel.RealSense.PipelineProfile::get_Streams()
extern void PipelineProfile_get_Streams_m4AB79670A85865858270FD144921D9E73D8FFEE6 (void);
// 0x00000259 Intel.RealSense.StreamProfile Intel.RealSense.PipelineProfile::GetStream(Intel.RealSense.Stream,System.Int32)
extern void PipelineProfile_GetStream_m2C78EA621B282F35FD1552B34E51F9D37B224029 (void);
// 0x0000025A T Intel.RealSense.PipelineProfile::GetStream(Intel.RealSense.Stream,System.Int32)
// 0x0000025B System.IntPtr Intel.RealSense.Align::Create(Intel.RealSense.Stream)
extern void Align_Create_m65E16BB6620D856DD70EBA468568C2803C8452D7 (void);
// 0x0000025C System.Void Intel.RealSense.Align::.ctor(Intel.RealSense.Stream)
extern void Align__ctor_m36AB1104A49AAA766D674C651C0152B0F22DD78A (void);
// 0x0000025D Intel.RealSense.FrameSet Intel.RealSense.Align::Process(Intel.RealSense.FrameSet,Intel.RealSense.FramesReleaser)
extern void Align_Process_mA91C9463FF791185AE28A769DE19E14DC5BB2FD0 (void);
// 0x0000025E System.IntPtr Intel.RealSense.Colorizer::Create()
extern void Colorizer_Create_m64A466BAEF77BF13E4BCE020D4DD384F2833025A (void);
// 0x0000025F System.Void Intel.RealSense.Colorizer::.ctor(System.IntPtr)
extern void Colorizer__ctor_m33DB2E49442E511A51A03B85BE613DBF5694B9C0 (void);
// 0x00000260 System.Void Intel.RealSense.Colorizer::.ctor()
extern void Colorizer__ctor_mA446F9E539CEDC82221A49AC58BC777759FE521C (void);
// 0x00000261 Intel.RealSense.VideoFrame Intel.RealSense.Colorizer::Colorize(Intel.RealSense.Frame,Intel.RealSense.FramesReleaser)
extern void Colorizer_Colorize_m4FAFAD28185727799B5334DDC4C722C5C03721AB (void);
// 0x00000262 System.Void Intel.RealSense.CustomProcessingBlock::.ctor(Intel.RealSense.CustomProcessingBlock/FrameProcessorCallback)
extern void CustomProcessingBlock__ctor_mC714660C572ACD814B6B05755CD6A09C872BC171 (void);
// 0x00000263 System.Void Intel.RealSense.CustomProcessingBlock::Finalize()
extern void CustomProcessingBlock_Finalize_m99AECC503080E3AC9C662F31ED53803D5EBAA325 (void);
// 0x00000264 System.Void Intel.RealSense.CustomProcessingBlock::ProcessingBlockCallback(System.IntPtr,System.IntPtr,System.IntPtr)
extern void CustomProcessingBlock_ProcessingBlockCallback_mE46EB7A1EBBA94A3BD62C0E76D62197CE5A66544 (void);
// 0x00000265 Intel.RealSense.IOptionsContainer Intel.RealSense.CustomProcessingBlock::get_Options()
extern void CustomProcessingBlock_get_Options_m0EB34B76C20D7A8551B297064B34956ADCF2550C (void);
// 0x00000266 System.Void Intel.RealSense.CustomProcessingBlock::set_Options(Intel.RealSense.IOptionsContainer)
extern void CustomProcessingBlock_set_Options_mB26C452A921440E9D714AE4C0DF3F771FB97940F (void);
// 0x00000267 Intel.RealSense.FrameQueue Intel.RealSense.CustomProcessingBlock::get_Queue()
extern void CustomProcessingBlock_get_Queue_m3D57961F5EF765441576D17B049D8E7997A7ADC4 (void);
// 0x00000268 System.Void Intel.RealSense.CustomProcessingBlock::Process(T)
// 0x00000269 System.Void Intel.RealSense.CustomProcessingBlock::Start(Intel.RealSense.FrameQueue)
extern void CustomProcessingBlock_Start_m768D899DE9D5E2493F567141E2278CB20A907FCB (void);
// 0x0000026A System.Void Intel.RealSense.CustomProcessingBlock::Start()
extern void CustomProcessingBlock_Start_m03387AE81FCB6F51F91B55AC66397322F2A28973 (void);
// 0x0000026B System.Void Intel.RealSense.CustomProcessingBlock::Start(Intel.RealSense.FrameCallback)
extern void CustomProcessingBlock_Start_m9E061EA79E953981E2E7D8F385907E7F9C7B7C6E (void);
// 0x0000026C System.Boolean Intel.RealSense.CustomProcessingBlock::RegisterOption(Intel.RealSense.Option,System.Single,System.Single,System.Single,System.Single)
extern void CustomProcessingBlock_RegisterOption_m594284E5FAA70850E7634AC40ACC757DC005FD63 (void);
// 0x0000026D System.Void Intel.RealSense.CustomProcessingBlock::ProcessingBlockFrameCallback(System.IntPtr,System.IntPtr)
extern void CustomProcessingBlock_ProcessingBlockFrameCallback_m03DD7CC33C697A3D8AB3469F7BC238C8BAB7EC24 (void);
// 0x0000026E System.Void Intel.RealSense.CustomProcessingBlock::Dispose(System.Boolean)
extern void CustomProcessingBlock_Dispose_mC391F89D080A86E072DF135D47CCF1828891F70D (void);
// 0x0000026F System.Void Intel.RealSense.CustomProcessingBlock::Dispose()
extern void CustomProcessingBlock_Dispose_m30E965BD3AC43C2FB75BBDD92DE87C9B95284EFC (void);
// 0x00000270 System.Void Intel.RealSense.CustomProcessingBlock::.cctor()
extern void CustomProcessingBlock__cctor_mD7372818D94A4AB05D69D6F8D62AFB4B2BF0A370 (void);
// 0x00000271 System.Void Intel.RealSense.CustomProcessingBlock/FrameProcessorCallback::.ctor(System.Object,System.IntPtr)
extern void FrameProcessorCallback__ctor_m18CFDC8C584A68B62A4557F5D76C615D7E298459 (void);
// 0x00000272 System.Void Intel.RealSense.CustomProcessingBlock/FrameProcessorCallback::Invoke(Intel.RealSense.Frame,Intel.RealSense.FrameSource)
extern void FrameProcessorCallback_Invoke_mFBC84C817A26B143FD45E96C7BCB0CD7AE273B38 (void);
// 0x00000273 System.IAsyncResult Intel.RealSense.CustomProcessingBlock/FrameProcessorCallback::BeginInvoke(Intel.RealSense.Frame,Intel.RealSense.FrameSource,System.AsyncCallback,System.Object)
extern void FrameProcessorCallback_BeginInvoke_m828C064E8282B23EC0F23814BAC6254BADB8ECFD (void);
// 0x00000274 System.Void Intel.RealSense.CustomProcessingBlock/FrameProcessorCallback::EndInvoke(System.IAsyncResult)
extern void FrameProcessorCallback_EndInvoke_mAAA1D95F2A4931EE1D4D54505C74CB785CE306B5 (void);
// 0x00000275 System.IntPtr Intel.RealSense.DecimationFilter::Create()
extern void DecimationFilter_Create_m87CF6E398AA5C9B2FE70E90C6F38EE864C149669 (void);
// 0x00000276 System.Void Intel.RealSense.DecimationFilter::.ctor(System.IntPtr)
extern void DecimationFilter__ctor_m116187C994780C6F4936C091F2FFE1EF1E6EE2E8 (void);
// 0x00000277 System.Void Intel.RealSense.DecimationFilter::.ctor()
extern void DecimationFilter__ctor_m3300FAFCAD003C1C709D90010098EC2680B4AA36 (void);
// 0x00000278 Intel.RealSense.VideoFrame Intel.RealSense.DecimationFilter::ApplyFilter(Intel.RealSense.Frame,Intel.RealSense.FramesReleaser)
extern void DecimationFilter_ApplyFilter_m6EDC9A8B3318C15845BB16DF22B36C4BB32834A2 (void);
// 0x00000279 System.IntPtr Intel.RealSense.DisparityTransform::Create(System.Boolean)
extern void DisparityTransform_Create_mD159583BE086AE28FB5C5A96B2BEC2E009658660 (void);
// 0x0000027A System.Void Intel.RealSense.DisparityTransform::.ctor(System.IntPtr)
extern void DisparityTransform__ctor_mB0C1A94E3D847D263CC342D96D27FBCC7DA5DC60 (void);
// 0x0000027B System.Void Intel.RealSense.DisparityTransform::.ctor(System.Boolean)
extern void DisparityTransform__ctor_m0AFE6883C9919FB4F5430DA2373688D5F18304ED (void);
// 0x0000027C Intel.RealSense.VideoFrame Intel.RealSense.DisparityTransform::ApplyFilter(Intel.RealSense.Frame,Intel.RealSense.FramesReleaser)
extern void DisparityTransform_ApplyFilter_m2CC5D8FA2D33DE6A5A52C9D194CDAC5BB389DE12 (void);
// 0x0000027D System.Void Intel.RealSense.FrameSource::.ctor(System.Runtime.InteropServices.HandleRef)
extern void FrameSource__ctor_mA8668D31C394FA6FCA1A41475AC15A3E0215FEB5 (void);
// 0x0000027E T Intel.RealSense.FrameSource::AllocateVideoFrame(Intel.RealSense.StreamProfile,Intel.RealSense.Frame,System.Int32,System.Int32,System.Int32,System.Int32,Intel.RealSense.Extension)
// 0x0000027F T Intel.RealSense.FrameSource::AllocateMotionFrame(Intel.RealSense.StreamProfile,Intel.RealSense.Frame,Intel.RealSense.Extension)
// 0x00000280 Intel.RealSense.FrameSet Intel.RealSense.FrameSource::AllocateCompositeFrame(Intel.RealSense.FramesReleaser,Intel.RealSense.Frame[])
extern void FrameSource_AllocateCompositeFrame_mFDB68FA935AE9FE7B306A8EE6D5EDBF5706CC89D (void);
// 0x00000281 Intel.RealSense.FrameSet Intel.RealSense.FrameSource::AllocateCompositeFrame(Intel.RealSense.Frame[])
extern void FrameSource_AllocateCompositeFrame_m9D3D367D2CC39F835EE6D42CC87671BDF22F62E7 (void);
// 0x00000282 Intel.RealSense.FrameSet Intel.RealSense.FrameSource::AllocateCompositeFrame(System.Collections.Generic.IList`1<Intel.RealSense.Frame>)
extern void FrameSource_AllocateCompositeFrame_m9E5D289E12132C8ACBB9E815F2DDE8B347F8F045 (void);
// 0x00000283 System.Void Intel.RealSense.FrameSource::FrameReady(Intel.RealSense.Frame)
extern void FrameSource_FrameReady_m00EABCFDF9B7EB76D5462FCFBCA4C4905B079932 (void);
// 0x00000284 System.IntPtr Intel.RealSense.HoleFillingFilter::Create()
extern void HoleFillingFilter_Create_m82F319F966669C0761D4694155628D2EF297B054 (void);
// 0x00000285 System.Void Intel.RealSense.HoleFillingFilter::.ctor(System.IntPtr)
extern void HoleFillingFilter__ctor_mFF3AED5BEDD38F1BA84B84812CF4085675A64F92 (void);
// 0x00000286 System.Void Intel.RealSense.HoleFillingFilter::.ctor()
extern void HoleFillingFilter__ctor_mAEE464D5D59725587EE4EE1ACF7227BA97A9DF37 (void);
// 0x00000287 Intel.RealSense.VideoFrame Intel.RealSense.HoleFillingFilter::ApplyFilter(Intel.RealSense.Frame,Intel.RealSense.FramesReleaser)
extern void HoleFillingFilter_ApplyFilter_m4E7938AB38A59A46A3A284906D405192374BC45F (void);
// 0x00000288 System.IntPtr Intel.RealSense.PointCloud::Create()
extern void PointCloud_Create_m261755D36DDAB2FB09C6A724A22B13D9CB0C7A89 (void);
// 0x00000289 System.Void Intel.RealSense.PointCloud::.ctor(System.IntPtr)
extern void PointCloud__ctor_mAB7CBF07CDC4D4CCA9D7171FEE3B3DA5DA3AF43A (void);
// 0x0000028A System.Void Intel.RealSense.PointCloud::.ctor()
extern void PointCloud__ctor_mDA364BEC240D836185E6F03BC8981B902652BB87 (void);
// 0x0000028B Intel.RealSense.Points Intel.RealSense.PointCloud::Calculate(Intel.RealSense.Frame,Intel.RealSense.FramesReleaser)
extern void PointCloud_Calculate_m9201042DB8174DDFC691E964B05F1A8E725204EB (void);
// 0x0000028C System.Void Intel.RealSense.PointCloud::MapTexture(Intel.RealSense.VideoFrame)
extern void PointCloud_MapTexture_m4161393896F9576783597101F5A36B716A8DBBE1 (void);
// 0x0000028D Intel.RealSense.Frame Intel.RealSense.IProcessingBlock::Process(Intel.RealSense.Frame)
// 0x0000028E Intel.RealSense.IOptionsContainer Intel.RealSense.ProcessingBlock::get_Options()
extern void ProcessingBlock_get_Options_m579A427FF3957C5D16C7AC2651FAD8E39CAF1354 (void);
// 0x0000028F System.Void Intel.RealSense.ProcessingBlock::set_Options(Intel.RealSense.IOptionsContainer)
extern void ProcessingBlock_set_Options_mAEB856618F3860B607DCDCBAABD2AEB5D9CB6AB9 (void);
// 0x00000290 Intel.RealSense.InfoCollection Intel.RealSense.ProcessingBlock::get_Info()
extern void ProcessingBlock_get_Info_m12C672B3F2CDBDF3379560906D123601D09AD145 (void);
// 0x00000291 System.Void Intel.RealSense.ProcessingBlock::set_Info(Intel.RealSense.InfoCollection)
extern void ProcessingBlock_set_Info_m39CA86A4EDC2359FBA71C3C596AF2C916CBA0EDA (void);
// 0x00000292 Intel.RealSense.FrameQueue Intel.RealSense.ProcessingBlock::get_Queue()
extern void ProcessingBlock_get_Queue_m1FDE72B050649E336AE40F477CFC567DEA31A1AA (void);
// 0x00000293 System.Void Intel.RealSense.ProcessingBlock::.ctor(System.IntPtr)
extern void ProcessingBlock__ctor_mBB81F4D8294B2AF5B2BE5307FDB941FDE2701935 (void);
// 0x00000294 Intel.RealSense.Frame Intel.RealSense.ProcessingBlock::Process(Intel.RealSense.Frame)
extern void ProcessingBlock_Process_mE99AA39FCBC3F1FF9490FEDF52D45722714F2CE9 (void);
// 0x00000295 T Intel.RealSense.ProcessingBlock::Process(Intel.RealSense.Frame)
// 0x00000296 System.Void Intel.RealSense.ProcessingBlock::Dispose(System.Boolean)
extern void ProcessingBlock_Dispose_m7D2F83DD0D827B618A4C74AA7F8719BC227CE7E4 (void);
// 0x00000297 System.Boolean Intel.RealSense.ProcessingBlock::Is(Intel.RealSense.Extension)
extern void ProcessingBlock_Is_m536B178EFD37EB403BE17586B4FFD231560D5849 (void);
// 0x00000298 T Intel.RealSense.ProcessingBlock::As()
// 0x00000299 Intel.RealSense.Frame Intel.RealSense.IProcessingBlockExtensions::ApplyFilter(Intel.RealSense.Frame,Intel.RealSense.IProcessingBlock)
extern void IProcessingBlockExtensions_ApplyFilter_m4AC8D8761054498A26DC636D672A5863F170A295 (void);
// 0x0000029A System.IntPtr Intel.RealSense.SpatialFilter::Create()
extern void SpatialFilter_Create_m502FCFC6D12B1B57BA62456864C37174F2B9F84A (void);
// 0x0000029B System.Void Intel.RealSense.SpatialFilter::.ctor(System.IntPtr)
extern void SpatialFilter__ctor_m80EAC4869BCBD549E65E12AC397093913158D43E (void);
// 0x0000029C System.Void Intel.RealSense.SpatialFilter::.ctor()
extern void SpatialFilter__ctor_mE9DEC7D0DA5EF1DDBD93697E0F8415019A03F2EB (void);
// 0x0000029D Intel.RealSense.VideoFrame Intel.RealSense.SpatialFilter::ApplyFilter(Intel.RealSense.Frame,Intel.RealSense.FramesReleaser)
extern void SpatialFilter_ApplyFilter_m8BC8A38EEB916CC453698C6F8D51E184F35295F9 (void);
// 0x0000029E System.IntPtr Intel.RealSense.Syncer::Create()
extern void Syncer_Create_m254539CFB22DCC351BD8368B775E3DE6A649F22E (void);
// 0x0000029F System.Void Intel.RealSense.Syncer::.ctor(System.IntPtr)
extern void Syncer__ctor_m42DD0EAAB06541E566971781F857E9C68EF3C95E (void);
// 0x000002A0 System.Void Intel.RealSense.Syncer::.ctor()
extern void Syncer__ctor_m33869E1A0033BC779326CEB70456DA7770864290 (void);
// 0x000002A1 System.Void Intel.RealSense.Syncer::SubmitFrame(Intel.RealSense.Frame)
extern void Syncer_SubmitFrame_mB60E5C88FE70725889109E77DF15FF5B434342A5 (void);
// 0x000002A2 Intel.RealSense.FrameSet Intel.RealSense.Syncer::WaitForFrames(System.UInt32)
extern void Syncer_WaitForFrames_m2C7C7AEAF94C93D9F1FCE45396521C0319D027C4 (void);
// 0x000002A3 System.Boolean Intel.RealSense.Syncer::PollForFrames(Intel.RealSense.FrameSet&)
extern void Syncer_PollForFrames_m46146BF662A19C653163CFC66BCB48AB2CDD3F17 (void);
// 0x000002A4 System.IntPtr Intel.RealSense.TemporalFilter::Create()
extern void TemporalFilter_Create_mE1825A30A86C1EC6A45914E63F0B561F15C27058 (void);
// 0x000002A5 System.Void Intel.RealSense.TemporalFilter::.ctor(System.IntPtr)
extern void TemporalFilter__ctor_m81A821EB2001211AFC2160641967874B837E7706 (void);
// 0x000002A6 System.Void Intel.RealSense.TemporalFilter::.ctor()
extern void TemporalFilter__ctor_m4A5D5D5C7FE7329505A69977C7461FFEDD4C9C90 (void);
// 0x000002A7 Intel.RealSense.VideoFrame Intel.RealSense.TemporalFilter::ApplyFilter(Intel.RealSense.Frame,Intel.RealSense.FramesReleaser)
extern void TemporalFilter_ApplyFilter_m1EF69B9B84923F4655C538C200E0F5E81354EF30 (void);
// 0x000002A8 System.IntPtr Intel.RealSense.ZeroOrderInvalidationFilter::Create()
extern void ZeroOrderInvalidationFilter_Create_m61B550C230BAC29A0297CDA7C6BF871E04518097 (void);
// 0x000002A9 System.Void Intel.RealSense.ZeroOrderInvalidationFilter::.ctor(System.IntPtr)
extern void ZeroOrderInvalidationFilter__ctor_mF6EAD2E4AAE3A9F80D3CD4C9404E819B3EA14E54 (void);
// 0x000002AA System.Void Intel.RealSense.ZeroOrderInvalidationFilter::.ctor()
extern void ZeroOrderInvalidationFilter__ctor_mA253B75219433632803774F8F7700252C2D99ED0 (void);
// 0x000002AB Intel.RealSense.VideoFrame Intel.RealSense.ZeroOrderInvalidationFilter::ApplyFilter(Intel.RealSense.Frame,Intel.RealSense.FramesReleaser)
extern void ZeroOrderInvalidationFilter_ApplyFilter_mCBB08FFBDF25E26FA0DD327DC46864ED0E6D31EE (void);
// 0x000002AC System.Void Intel.RealSense.ProcessingBlockList::.ctor(System.IntPtr)
extern void ProcessingBlockList__ctor_m60CDF0EDFEEBC2F404547D64BB5CB28A2E1D307B (void);
// 0x000002AD System.Collections.Generic.IEnumerator`1<Intel.RealSense.ProcessingBlock> Intel.RealSense.ProcessingBlockList::GetEnumerator()
extern void ProcessingBlockList_GetEnumerator_mDC1354306E9545929F4DDE8A678460A1FAC446A9 (void);
// 0x000002AE System.Collections.IEnumerator Intel.RealSense.ProcessingBlockList::System.Collections.IEnumerable.GetEnumerator()
extern void ProcessingBlockList_System_Collections_IEnumerable_GetEnumerator_m7DCF1AC9ECFA0C6FA547FC582D81587C1CC14616 (void);
// 0x000002AF System.Int32 Intel.RealSense.ProcessingBlockList::get_Count()
extern void ProcessingBlockList_get_Count_mD7C57A2791458FA2D4DA513D58739A468BD66BD8 (void);
// 0x000002B0 System.Object Intel.RealSense.ProcessingBlockList::get_SyncRoot()
extern void ProcessingBlockList_get_SyncRoot_m1100401609E1B2C49B9F6325164E369A555D5149 (void);
// 0x000002B1 System.Boolean Intel.RealSense.ProcessingBlockList::get_IsSynchronized()
extern void ProcessingBlockList_get_IsSynchronized_mEE05B1CFCC75145722FDD2C180D8A4100E0A6B8D (void);
// 0x000002B2 T Intel.RealSense.ProcessingBlockList::GetProcessingBlock(System.Int32)
// 0x000002B3 System.Void Intel.RealSense.ProcessingBlockList::CopyTo(System.Array,System.Int32)
extern void ProcessingBlockList_CopyTo_mCBADE5A270C99A3D247213E30AC2BC8A722F7AC0 (void);
// 0x000002B4 Intel.RealSense.ProcessingBlock Intel.RealSense.ProcessingBlockList::get_Item(System.Int32)
extern void ProcessingBlockList_get_Item_mD44E8A2EFFA1E77054FAC664A91AB9AC0A8C0767 (void);
// 0x000002B5 System.Void Intel.RealSense.ProcessingBlockList/<GetEnumerator>d__1::.ctor(System.Int32)
extern void U3CGetEnumeratorU3Ed__1__ctor_m266D07C1A341838E3A5C97B468BBD1D6BA0775C0 (void);
// 0x000002B6 System.Void Intel.RealSense.ProcessingBlockList/<GetEnumerator>d__1::System.IDisposable.Dispose()
extern void U3CGetEnumeratorU3Ed__1_System_IDisposable_Dispose_mD8D86B7A71E1C59B467D781C0163FDC88FCA24F6 (void);
// 0x000002B7 System.Boolean Intel.RealSense.ProcessingBlockList/<GetEnumerator>d__1::MoveNext()
extern void U3CGetEnumeratorU3Ed__1_MoveNext_mA041164DFF36AD28BAF5AFD87C33C9FD9D1EBF8D (void);
// 0x000002B8 Intel.RealSense.ProcessingBlock Intel.RealSense.ProcessingBlockList/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<Intel.RealSense.ProcessingBlock>.get_Current()
extern void U3CGetEnumeratorU3Ed__1_System_Collections_Generic_IEnumeratorU3CIntel_RealSense_ProcessingBlockU3E_get_Current_m8726C310338C11FB863FE82F14ECA36649840CBF (void);
// 0x000002B9 System.Void Intel.RealSense.ProcessingBlockList/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
extern void U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m5091A10841728405B60242565912507EA7EFF33A (void);
// 0x000002BA System.Object Intel.RealSense.ProcessingBlockList/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
extern void U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_get_Current_mE5296A5BFD50D202F5658998554FDE3FB3DE738C (void);
// 0x000002BB System.IntPtr Intel.RealSense.ThresholdFilter::Create()
extern void ThresholdFilter_Create_mCAABC6C2CA333AE6960300FE9D851F7AC6717626 (void);
// 0x000002BC System.Void Intel.RealSense.ThresholdFilter::.ctor(System.IntPtr)
extern void ThresholdFilter__ctor_m8CB914E1BB38DFE2E721326C2B2F4834B7BBF375 (void);
// 0x000002BD System.Void Intel.RealSense.ThresholdFilter::.ctor()
extern void ThresholdFilter__ctor_m7829CC83A469F6DF4F2683E3A310759AA86009F0 (void);
// 0x000002BE Intel.RealSense.VideoFrame Intel.RealSense.ThresholdFilter::ApplyFilter(Intel.RealSense.Frame,Intel.RealSense.FramesReleaser)
extern void ThresholdFilter_ApplyFilter_m911981CD6D89A8F35C293B15A56A883A6424E001 (void);
// 0x000002BF System.IntPtr Intel.RealSense.UnitsTransform::Create()
extern void UnitsTransform_Create_m475421D34F4FACF864B0C212171FE55A70D4DEEB (void);
// 0x000002C0 System.Void Intel.RealSense.UnitsTransform::.ctor(System.IntPtr)
extern void UnitsTransform__ctor_mCF3480472D06FFDF36DE0B4AFAA639208CC6EE90 (void);
// 0x000002C1 System.Void Intel.RealSense.UnitsTransform::.ctor()
extern void UnitsTransform__ctor_mB8BB06672D306D7A11F93CDD85EEE65A1BABD1D2 (void);
// 0x000002C2 Intel.RealSense.VideoFrame Intel.RealSense.UnitsTransform::ApplyFilter(Intel.RealSense.Frame,Intel.RealSense.FramesReleaser)
extern void UnitsTransform_ApplyFilter_m55CB08DA85B48AFA2D17F812DB94FC96545B1F8D (void);
// 0x000002C3 System.Void Intel.RealSense.StreamProfile::Initialize()
extern void StreamProfile_Initialize_m5D1F4FBD1B6245A101D10C5A04986AE496ACB466 (void);
// 0x000002C4 System.Void Intel.RealSense.StreamProfile::.ctor(System.IntPtr)
extern void StreamProfile__ctor_m2F13BEC60F1D1D5BD4E855C8EB4E6B66FD789C73 (void);
// 0x000002C5 System.Void Intel.RealSense.StreamProfile::Dispose(System.Boolean)
extern void StreamProfile_Dispose_m4B075D2793E7ECFF16FE3848DAB0972F4D475BAF (void);
// 0x000002C6 Intel.RealSense.Stream Intel.RealSense.StreamProfile::get_Stream()
extern void StreamProfile_get_Stream_mD0DDF21548F9306FE5D0E9482DED169A151D4324 (void);
// 0x000002C7 Intel.RealSense.Format Intel.RealSense.StreamProfile::get_Format()
extern void StreamProfile_get_Format_m41C77E43AF55637FA711947D0E1942DE9D0853B4 (void);
// 0x000002C8 System.Int32 Intel.RealSense.StreamProfile::get_Framerate()
extern void StreamProfile_get_Framerate_m7BB20A16ED0E6C2938C70097AE08C8A00C80FEDB (void);
// 0x000002C9 System.Int32 Intel.RealSense.StreamProfile::get_Index()
extern void StreamProfile_get_Index_mF3AF6675BC5BBBDA20F92BC444AF38138FE8799A (void);
// 0x000002CA System.Int32 Intel.RealSense.StreamProfile::get_UniqueID()
extern void StreamProfile_get_UniqueID_mC731218BAA96C3EF140D6FB3912EC1B9E1E5640B (void);
// 0x000002CB System.Boolean Intel.RealSense.StreamProfile::get_IsDefault()
extern void StreamProfile_get_IsDefault_m9F0B9C4A9C5A7BBA01A5AE933EBD975C85DE5A5A (void);
// 0x000002CC System.Void Intel.RealSense.StreamProfile::set_IsDefault(System.Boolean)
extern void StreamProfile_set_IsDefault_m3DE3C8911B4F82FE804C00E129160E0259549AA1 (void);
// 0x000002CD System.Boolean Intel.RealSense.StreamProfile::get_IsCloned()
extern void StreamProfile_get_IsCloned_m19D5B4D4813FE1975DC10185B0114745B0DE4355 (void);
// 0x000002CE Intel.RealSense.Extrinsics Intel.RealSense.StreamProfile::GetExtrinsicsTo(Intel.RealSense.StreamProfile)
extern void StreamProfile_GetExtrinsicsTo_mBB4EDBF0DD49E06C15911861FAE9D17EE14D3780 (void);
// 0x000002CF System.Void Intel.RealSense.StreamProfile::RegisterExtrinsicsTo(Intel.RealSense.StreamProfile,Intel.RealSense.Extrinsics)
extern void StreamProfile_RegisterExtrinsicsTo_mCDE5835E1D13C4A760096007FF06AA8CC9A44109 (void);
// 0x000002D0 Intel.RealSense.StreamProfile Intel.RealSense.StreamProfile::Clone(Intel.RealSense.Stream,System.Int32,Intel.RealSense.Format)
extern void StreamProfile_Clone_mF7F116C27D1059AE8E978C8E9644EAC43643D50C (void);
// 0x000002D1 System.Boolean Intel.RealSense.StreamProfile::Is(Intel.RealSense.Extension)
extern void StreamProfile_Is_m9384D565153B7D1781A4271A0995B33C9BEE005E (void);
// 0x000002D2 T Intel.RealSense.StreamProfile::As()
// 0x000002D3 T Intel.RealSense.StreamProfile::Cast()
// 0x000002D4 T Intel.RealSense.StreamProfile::Create(System.IntPtr)
// 0x000002D5 Intel.RealSense.StreamProfile Intel.RealSense.StreamProfile::Create(System.IntPtr)
extern void StreamProfile_Create_m243CD52C137189667F87C416B368A2CE2C73DE1C (void);
// 0x000002D6 System.Void Intel.RealSense.StreamProfile::.cctor()
extern void StreamProfile__cctor_mBF0B6A2C705E19EFEE278F16F3D37836DCA7808C (void);
// 0x000002D7 System.Void Intel.RealSense.StreamProfileList::.ctor(System.IntPtr)
extern void StreamProfileList__ctor_m35CFBE709157E012AC4347EEC1EDD33F3F075F6D (void);
// 0x000002D8 System.Collections.Generic.IEnumerator`1<Intel.RealSense.StreamProfile> Intel.RealSense.StreamProfileList::GetEnumerator()
extern void StreamProfileList_GetEnumerator_m22C29E074EF07C598AA87E3F6F261938BFA45740 (void);
// 0x000002D9 System.Collections.IEnumerator Intel.RealSense.StreamProfileList::System.Collections.IEnumerable.GetEnumerator()
extern void StreamProfileList_System_Collections_IEnumerable_GetEnumerator_mF5BC80FEF8B3814FB8C314D74BA008D7D8632579 (void);
// 0x000002DA System.Int32 Intel.RealSense.StreamProfileList::get_Count()
extern void StreamProfileList_get_Count_m7E209405799AE1262D3350418C8A0F746CDEB868 (void);
// 0x000002DB System.Object Intel.RealSense.StreamProfileList::get_SyncRoot()
extern void StreamProfileList_get_SyncRoot_mF2D209569A6BA3921D458ACC34DCA29ECA599714 (void);
// 0x000002DC System.Boolean Intel.RealSense.StreamProfileList::get_IsSynchronized()
extern void StreamProfileList_get_IsSynchronized_m95E3BEC1201E0528FB3FDA8A5A8FF0D9D1164252 (void);
// 0x000002DD Intel.RealSense.StreamProfile Intel.RealSense.StreamProfileList::get_Item(System.Int32)
extern void StreamProfileList_get_Item_mBD2A7EE6648608A0F5110D6C65345DBEEDFFC144 (void);
// 0x000002DE T Intel.RealSense.StreamProfileList::GetProfile(System.Int32)
// 0x000002DF System.Void Intel.RealSense.StreamProfileList::CopyTo(System.Array,System.Int32)
extern void StreamProfileList_CopyTo_m0068191481ECBF8FE4BB71C99F34D9682E976D36 (void);
// 0x000002E0 System.Void Intel.RealSense.StreamProfileList/<GetEnumerator>d__1::.ctor(System.Int32)
extern void U3CGetEnumeratorU3Ed__1__ctor_m105A99820051D984F4C1D1DCAE4D47EB95DC41B6 (void);
// 0x000002E1 System.Void Intel.RealSense.StreamProfileList/<GetEnumerator>d__1::System.IDisposable.Dispose()
extern void U3CGetEnumeratorU3Ed__1_System_IDisposable_Dispose_m854A8BD349B6624BEDC7BCBF3684D063D50E47B3 (void);
// 0x000002E2 System.Boolean Intel.RealSense.StreamProfileList/<GetEnumerator>d__1::MoveNext()
extern void U3CGetEnumeratorU3Ed__1_MoveNext_mF4E5648DED22907D21255D95FA8E2962A5F40CC9 (void);
// 0x000002E3 Intel.RealSense.StreamProfile Intel.RealSense.StreamProfileList/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<Intel.RealSense.StreamProfile>.get_Current()
extern void U3CGetEnumeratorU3Ed__1_System_Collections_Generic_IEnumeratorU3CIntel_RealSense_StreamProfileU3E_get_Current_mB0AB532222E8AD49F6BFB215CFBAC6EF3710CCFD (void);
// 0x000002E4 System.Void Intel.RealSense.StreamProfileList/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
extern void U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m2ACA60A0A5BDE6A7E069F94A9807A99B28F872CA (void);
// 0x000002E5 System.Object Intel.RealSense.StreamProfileList/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
extern void U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_get_Current_m0B3E837D1617C05057C3B7B6C0643CD8F6E70301 (void);
// 0x000002E6 System.Void Intel.RealSense.VideoStreamProfile::Initialize()
extern void VideoStreamProfile_Initialize_m8DEE5FE6FC8C1525A2294043C5E8BABB42BB3530 (void);
// 0x000002E7 System.Void Intel.RealSense.VideoStreamProfile::.ctor(System.IntPtr)
extern void VideoStreamProfile__ctor_mF7CF11989EE9C7CA67202574A40BBC89B297E53C (void);
// 0x000002E8 Intel.RealSense.Intrinsics Intel.RealSense.VideoStreamProfile::GetIntrinsics()
extern void VideoStreamProfile_GetIntrinsics_m6ED053473B83EF4FC3AD6C2ED583888D84E1C7FC (void);
// 0x000002E9 Intel.RealSense.StreamProfile Intel.RealSense.VideoStreamProfile::Clone(Intel.RealSense.Stream,System.Int32,Intel.RealSense.Format,System.Int32,System.Int32,Intel.RealSense.Intrinsics)
extern void VideoStreamProfile_Clone_mF514B94F4EFE1CD929EAA51611AEF8651711A58E (void);
// 0x000002EA System.Int32 Intel.RealSense.VideoStreamProfile::get_Width()
extern void VideoStreamProfile_get_Width_mA5C68D5575183BCDBF046393274514E44A8BCAFA (void);
// 0x000002EB System.Int32 Intel.RealSense.VideoStreamProfile::get_Height()
extern void VideoStreamProfile_get_Height_mD3165342ABE9DD67613D4BFA7B673A68D6AB919A (void);
// 0x000002EC System.Void Intel.RealSense.MotionStreamProfile::.ctor(System.IntPtr)
extern void MotionStreamProfile__ctor_m600B4A58AF540780048FE12E12FB3A80B087AB7A (void);
// 0x000002ED Intel.RealSense.MotionDeviceIntrinsics Intel.RealSense.MotionStreamProfile::GetIntrinsics()
extern void MotionStreamProfile_GetIntrinsics_mAE38DCD126B218FAC50B7B6C3EF43EA5B27A004D (void);
// 0x000002EE System.Void Intel.RealSense.PoseStreamProfile::.ctor(System.IntPtr)
extern void PoseStreamProfile__ctor_m7225E89D4B6DE2374B390528D67085927A339746 (void);
// 0x000002EF System.Void Intel.RealSense.Sensor::Initialize()
extern void Sensor_Initialize_m61AEA740EC6CCF8A9EF813D7DFD301A0759E5457 (void);
// 0x000002F0 T Intel.RealSense.Sensor::Create(System.IntPtr)
// 0x000002F1 T Intel.RealSense.Sensor::Create(Intel.RealSense.Sensor)
// 0x000002F2 System.Void Intel.RealSense.Sensor::.ctor(System.IntPtr)
extern void Sensor__ctor_m83D9E2F39D350BEF301C73673BC2AB08BA49825D (void);
// 0x000002F3 System.Void Intel.RealSense.Sensor::Dispose(System.Boolean)
extern void Sensor_Dispose_m35E848822BD54426BD89186631FED11B0BE9FD2F (void);
// 0x000002F4 Intel.RealSense.InfoCollection Intel.RealSense.Sensor::get_Info()
extern void Sensor_get_Info_mE1FE6534D3EBC8F06730360221A87AD467800869 (void);
// 0x000002F5 System.Void Intel.RealSense.Sensor::set_Info(Intel.RealSense.InfoCollection)
extern void Sensor_set_Info_mDB5DB36200823B0444450A7409A576E044EBBA96 (void);
// 0x000002F6 Intel.RealSense.IOptionsContainer Intel.RealSense.Sensor::get_Options()
extern void Sensor_get_Options_mB0F538BC407CE943D8A28DC448A30F2BF3847A7F (void);
// 0x000002F7 System.Void Intel.RealSense.Sensor::set_Options(Intel.RealSense.IOptionsContainer)
extern void Sensor_set_Options_m9EBE6D8DE4D54227582F984106A080991CEEAB10 (void);
// 0x000002F8 System.Void Intel.RealSense.Sensor::Open(Intel.RealSense.StreamProfile)
extern void Sensor_Open_m58148D11C85338026DDF09DC4125B40039D43988 (void);
// 0x000002F9 System.Void Intel.RealSense.Sensor::Open(Intel.RealSense.StreamProfile[])
extern void Sensor_Open_m601E3AE7AF9E8C26EC699677D192DD900E50BB92 (void);
// 0x000002FA System.Void Intel.RealSense.Sensor::Start(Intel.RealSense.FrameQueue)
extern void Sensor_Start_m3AF58A5491941E19AAA93DF02DB990E8E49213AC (void);
// 0x000002FB System.Void Intel.RealSense.Sensor::Start(Intel.RealSense.FrameCallback)
extern void Sensor_Start_mDFC722BBFF7EA4BBFAEFD9A19770FB24E0DD2F5C (void);
// 0x000002FC System.Void Intel.RealSense.Sensor::Stop()
extern void Sensor_Stop_mD459FF73605C5E3BB964AC1E26CF7640C30DCCA6 (void);
// 0x000002FD System.Void Intel.RealSense.Sensor::Close()
extern void Sensor_Close_mC8F58B024215E566860AA68F034E19DA2960564C (void);
// 0x000002FE System.Boolean Intel.RealSense.Sensor::Is(Intel.RealSense.Extension)
extern void Sensor_Is_mDC62202E43050DE23E1FDD4B06222310FD59DA85 (void);
// 0x000002FF T Intel.RealSense.Sensor::As()
// 0x00000300 System.Single Intel.RealSense.Sensor::get_DepthScale()
extern void Sensor_get_DepthScale_mD3D761CF297DFAA67DF0CEAB7310B241999F7E03 (void);
// 0x00000301 Intel.RealSense.AutoExposureROI Intel.RealSense.Sensor::get_AutoExposureSettings()
extern void Sensor_get_AutoExposureSettings_mA65A3D1B87A45F1AA36CC87458C3A030AE835A6C (void);
// 0x00000302 System.Collections.ObjectModel.ReadOnlyCollection`1<Intel.RealSense.StreamProfile> Intel.RealSense.Sensor::get_StreamProfiles()
extern void Sensor_get_StreamProfiles_m2495C684F23B82E6B15B82DD931BB18221154FA3 (void);
// 0x00000303 System.Collections.ObjectModel.ReadOnlyCollection`1<Intel.RealSense.ProcessingBlock> Intel.RealSense.Sensor::get_ProcessingBlocks()
extern void Sensor_get_ProcessingBlocks_m0D7B2F2FD08072DEB5454067C57D0136FFE1DBD3 (void);
// 0x00000304 System.Void Intel.RealSense.Sensor::.cctor()
extern void Sensor__cctor_m98CC07403EADC67BE4277667E5F871B4E6674E9B (void);
// 0x00000305 System.Void Intel.RealSense.Sensor/CameraInfos::.ctor(System.IntPtr)
extern void CameraInfos__ctor_m1A40507493C7B0AAD5B8715070BEA7C2DCADE916 (void);
// 0x00000306 System.String Intel.RealSense.Sensor/CameraInfos::get_Item(Intel.RealSense.CameraInfo)
extern void CameraInfos_get_Item_m20B76CBFFBA81412FDE3B79BCB261A7F492EBDF1 (void);
// 0x00000307 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<Intel.RealSense.CameraInfo,System.String>> Intel.RealSense.Sensor/CameraInfos::GetEnumerator()
extern void CameraInfos_GetEnumerator_m5811EA6CCF7579565D3551E38C1C9457B23E848B (void);
// 0x00000308 System.Collections.IEnumerator Intel.RealSense.Sensor/CameraInfos::System.Collections.IEnumerable.GetEnumerator()
extern void CameraInfos_System_Collections_IEnumerable_GetEnumerator_m0D6A93D9EC40A220299CC83F67D68E6BBD7F070A (void);
// 0x00000309 System.Void Intel.RealSense.Sensor/CameraInfos::.cctor()
extern void CameraInfos__cctor_m5E796322357B8B75063AF5EE8FA128ADFE7924E8 (void);
// 0x0000030A System.Void Intel.RealSense.Sensor/CameraInfos/<GetEnumerator>d__5::.ctor(System.Int32)
extern void U3CGetEnumeratorU3Ed__5__ctor_m6DCE0B340B8FB362E04AD6169BC127A06B64E1FA (void);
// 0x0000030B System.Void Intel.RealSense.Sensor/CameraInfos/<GetEnumerator>d__5::System.IDisposable.Dispose()
extern void U3CGetEnumeratorU3Ed__5_System_IDisposable_Dispose_m5223E8E16C4BF4F059DBB2358FFC00692EC2C472 (void);
// 0x0000030C System.Boolean Intel.RealSense.Sensor/CameraInfos/<GetEnumerator>d__5::MoveNext()
extern void U3CGetEnumeratorU3Ed__5_MoveNext_mB6E4B90679E75AFCB630E4AF1AAE9461F23E4060 (void);
// 0x0000030D System.Collections.Generic.KeyValuePair`2<Intel.RealSense.CameraInfo,System.String> Intel.RealSense.Sensor/CameraInfos/<GetEnumerator>d__5::System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<Intel.RealSense.CameraInfo,System.String>>.get_Current()
extern void U3CGetEnumeratorU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CIntel_RealSense_CameraInfoU2CSystem_StringU3EU3E_get_Current_m104CE4DFB83FD7B14A91CC319468A952F62C1355 (void);
// 0x0000030E System.Void Intel.RealSense.Sensor/CameraInfos/<GetEnumerator>d__5::System.Collections.IEnumerator.Reset()
extern void U3CGetEnumeratorU3Ed__5_System_Collections_IEnumerator_Reset_mD5DC123A862E063B11EC07C17C3CED3677A7ADCA (void);
// 0x0000030F System.Object Intel.RealSense.Sensor/CameraInfos/<GetEnumerator>d__5::System.Collections.IEnumerator.get_Current()
extern void U3CGetEnumeratorU3Ed__5_System_Collections_IEnumerator_get_Current_m6289A62168BE276D900F06FE9FDA632BF5F308C2 (void);
// 0x00000310 System.Void Intel.RealSense.Sensor/<>c__DisplayClass21_0::.ctor()
extern void U3CU3Ec__DisplayClass21_0__ctor_m0A564D155C9F7D6EEBA26C0AC7B3C9E4A4ED3A72 (void);
// 0x00000311 System.Void Intel.RealSense.Sensor/<>c__DisplayClass21_0::<Start>b__0(System.IntPtr,System.IntPtr)
extern void U3CU3Ec__DisplayClass21_0_U3CStartU3Eb__0_m899BFA7019110866D7B608676F4E0B11E564E875 (void);
// 0x00000312 System.Void Intel.RealSense.SensorList::.ctor(System.IntPtr)
extern void SensorList__ctor_m9350F20CA413C985934E5F4E1DB3F841B87562CD (void);
// 0x00000313 System.Collections.Generic.IEnumerator`1<Intel.RealSense.Sensor> Intel.RealSense.SensorList::GetEnumerator()
extern void SensorList_GetEnumerator_mD6B02A8E893610B50B571DA877F40EFF0B262907 (void);
// 0x00000314 System.Collections.IEnumerator Intel.RealSense.SensorList::System.Collections.IEnumerable.GetEnumerator()
extern void SensorList_System_Collections_IEnumerable_GetEnumerator_m3508581FCFEED3456317A4C92D5AA9DB73E28422 (void);
// 0x00000315 System.Void Intel.RealSense.SensorList::CopyTo(System.Array,System.Int32)
extern void SensorList_CopyTo_mF63876E72983647D1499E32BBA0F4B5D4ACACE78 (void);
// 0x00000316 System.Int32 Intel.RealSense.SensorList::get_Count()
extern void SensorList_get_Count_m33B8195A3FCC38CDD27D29F414CA7D7BEC7FACFE (void);
// 0x00000317 System.Object Intel.RealSense.SensorList::get_SyncRoot()
extern void SensorList_get_SyncRoot_mD41F16F82FA7D25F21F0D2E37A65AE7CD972E842 (void);
// 0x00000318 System.Boolean Intel.RealSense.SensorList::get_IsSynchronized()
extern void SensorList_get_IsSynchronized_m3D7D527328E63FA2E58E2B5CBC24E3F41F626812 (void);
// 0x00000319 Intel.RealSense.Sensor Intel.RealSense.SensorList::get_Item(System.Int32)
extern void SensorList_get_Item_m0B4F9DD244FA171604E0F99F032726DE4D7C9567 (void);
// 0x0000031A System.Void Intel.RealSense.SensorList/<GetEnumerator>d__1::.ctor(System.Int32)
extern void U3CGetEnumeratorU3Ed__1__ctor_m00F0A220891E04B6C33164F8E5F03140C2041177 (void);
// 0x0000031B System.Void Intel.RealSense.SensorList/<GetEnumerator>d__1::System.IDisposable.Dispose()
extern void U3CGetEnumeratorU3Ed__1_System_IDisposable_Dispose_m1C7ECF8476B3236CAA4467CE42B73F6807DE9C93 (void);
// 0x0000031C System.Boolean Intel.RealSense.SensorList/<GetEnumerator>d__1::MoveNext()
extern void U3CGetEnumeratorU3Ed__1_MoveNext_m8B6F5D9E4DD8662B43034443716AC4B1415A6F7E (void);
// 0x0000031D Intel.RealSense.Sensor Intel.RealSense.SensorList/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<Intel.RealSense.Sensor>.get_Current()
extern void U3CGetEnumeratorU3Ed__1_System_Collections_Generic_IEnumeratorU3CIntel_RealSense_SensorU3E_get_Current_m34CF4DB190F450E993F089126DC3AAC108A1E9A7 (void);
// 0x0000031E System.Void Intel.RealSense.SensorList/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
extern void U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_mE8456A19B3EC6BAB815FBD0FFB7A8804E356C9F8 (void);
// 0x0000031F System.Object Intel.RealSense.SensorList/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
extern void U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_get_Current_mC4E3AEDBF04F0DA8ED2D2666DAAFBA235F3A2B40 (void);
// 0x00000320 System.Void Intel.RealSense.SoftwareSensor::.ctor(System.IntPtr)
extern void SoftwareSensor__ctor_mAE910AF5A53761F5E7A0475A3BA12D83A6AF3A4F (void);
// 0x00000321 System.Void Intel.RealSense.SoftwareSensor::AddVideoFrame(Intel.RealSense.SoftwareVideoFrame)
extern void SoftwareSensor_AddVideoFrame_mFF0905C2D171BF4C0BA690F0FCDAB50D06F8E4F9 (void);
// 0x00000322 System.Void Intel.RealSense.SoftwareSensor::AddVideoFrame(T[],System.Int32,System.Int32,System.Double,Intel.RealSense.TimestampDomain,System.Int32,Intel.RealSense.VideoStreamProfile)
// 0x00000323 System.Void Intel.RealSense.SoftwareSensor::AddMotionFrame(Intel.RealSense.SoftwareMotionFrame)
extern void SoftwareSensor_AddMotionFrame_m71BDA677BC48DA1F3F08122307BDC497C1AF30B8 (void);
// 0x00000324 System.Void Intel.RealSense.SoftwareSensor::AddPoseFrame(Intel.RealSense.SoftwarePoseFrame)
extern void SoftwareSensor_AddPoseFrame_m4ACAF7ED910B6368FDDF24CD3EAFBC166B497BD8 (void);
// 0x00000325 Intel.RealSense.VideoStreamProfile Intel.RealSense.SoftwareSensor::AddVideoStream(Intel.RealSense.SoftwareVideoStream)
extern void SoftwareSensor_AddVideoStream_mEEA13AF0B87BCC0FF420C78006D3978AA6F889F8 (void);
// 0x00000326 Intel.RealSense.MotionStreamProfile Intel.RealSense.SoftwareSensor::AddMotionStream(Intel.RealSense.SoftwareMotionStream)
extern void SoftwareSensor_AddMotionStream_m054226F42624E200797F2328C86A4E58CD9EABF3 (void);
// 0x00000327 Intel.RealSense.PoseStreamProfile Intel.RealSense.SoftwareSensor::AddPoseStream(Intel.RealSense.SoftwarePoseStream)
extern void SoftwareSensor_AddPoseStream_m9E352E4983D3D28CE3ABC22CE6730E927CF70C01 (void);
// 0x00000328 System.Void Intel.RealSense.SoftwareSensor::SetMetadata(Intel.RealSense.FrameMetadataValue,System.Int64)
extern void SoftwareSensor_SetMetadata_mE007471C92A1447277894D8795410614E80552EA (void);
// 0x00000329 System.Void Intel.RealSense.SoftwareSensor::AddReadOnlyOption(Intel.RealSense.Option,System.Single)
extern void SoftwareSensor_AddReadOnlyOption_m091F1CA9998424B567B5F859856B4FAC98A533FF (void);
// 0x0000032A System.Void Intel.RealSense.SoftwareSensor::UpdateReadOnlyOption(Intel.RealSense.Option,System.Single)
extern void SoftwareSensor_UpdateReadOnlyOption_mE2625615DC2BD72B102C52CE70BF9C85BC351EC0 (void);
// 0x0000032B System.Void Intel.RealSense.SoftwareSensor/<>c__2`1::.cctor()
// 0x0000032C System.Void Intel.RealSense.SoftwareSensor/<>c__2`1::.ctor()
// 0x0000032D System.Void Intel.RealSense.SoftwareSensor/<>c__2`1::<AddVideoFrame>b__2_0(System.IntPtr)
// 0x0000032E System.Void Intel.RealSense.PoseSensor::.ctor(System.IntPtr)
extern void PoseSensor__ctor_mA62C564E1DED6125EC8B71491E174D8AAFE5E5A9 (void);
// 0x0000032F Intel.RealSense.PoseSensor Intel.RealSense.PoseSensor::FromSensor(Intel.RealSense.Sensor)
extern void PoseSensor_FromSensor_m1921C0B201ADA2554BED7B951DEF13F45FFC2315 (void);
// 0x00000330 System.Byte[] Intel.RealSense.PoseSensor::ExportLocalizationMap()
extern void PoseSensor_ExportLocalizationMap_mB93754439F973C2EE9449147B0A0DE393F9540F3 (void);
// 0x00000331 System.Boolean Intel.RealSense.PoseSensor::ImportLocalizationMap(System.Byte[])
extern void PoseSensor_ImportLocalizationMap_m2A2107DEBBBAA901AA170AD59E62B18BFDA873EF (void);
// 0x00000332 System.Boolean Intel.RealSense.PoseSensor::SetStaticNode(System.String,Intel.RealSense.Math.Vector,Intel.RealSense.Math.Quaternion)
extern void PoseSensor_SetStaticNode_m3B01C072B5E096A5C6643225F33C4B9CD43CCF5F (void);
// 0x00000333 System.Boolean Intel.RealSense.PoseSensor::GetStaticNode(System.String,Intel.RealSense.Math.Vector&,Intel.RealSense.Math.Quaternion&)
extern void PoseSensor_GetStaticNode_m8D6A6EBED24EE77B1713D145A3EED018E8DFAD92 (void);
// 0x00000334 System.Void Intel.RealSense.MaxUsableRangeSensor::.ctor(System.IntPtr)
extern void MaxUsableRangeSensor__ctor_m2537977B15418DC9CA4410148C39F0CF506548BC (void);
// 0x00000335 System.Single Intel.RealSense.MaxUsableRangeSensor::GetMaxUsableRange()
extern void MaxUsableRangeSensor_GetMaxUsableRange_m74A4E386FA49864946B9A6962FE67840BDC8C174 (void);
// 0x00000336 Intel.RealSense.ROI Intel.RealSense.AutoExposureROI::GetRegionOfInterest()
extern void AutoExposureROI_GetRegionOfInterest_m5FBB4F9CBA27233E672F45DE15F1185ACB656DBA (void);
// 0x00000337 System.Void Intel.RealSense.AutoExposureROI::SetRegionOfInterest(Intel.RealSense.ROI)
extern void AutoExposureROI_SetRegionOfInterest_mFB1924CC42FD335650D0DF5020B1211925C6BAD4 (void);
// 0x00000338 System.Void Intel.RealSense.AutoExposureROI::.ctor()
extern void AutoExposureROI__ctor_mB3D6930A23FDDD2A3C9E41C6F6C0E406D9BF8C85 (void);
// 0x00000339 System.Void Intel.RealSense.FrameCallback::.ctor(System.Object,System.IntPtr)
extern void FrameCallback__ctor_m354B1E847C20129E9151A191DCDA77F9B2CEFB46 (void);
// 0x0000033A System.Void Intel.RealSense.FrameCallback::Invoke(Intel.RealSense.Frame)
extern void FrameCallback_Invoke_m960F646C59099FC30777D80B8F8494929B9ACFD2 (void);
// 0x0000033B System.IAsyncResult Intel.RealSense.FrameCallback::BeginInvoke(Intel.RealSense.Frame,System.AsyncCallback,System.Object)
extern void FrameCallback_BeginInvoke_m26F2EF3C34391D2CB96354EC4F05A7347C459263 (void);
// 0x0000033C System.Void Intel.RealSense.FrameCallback::EndInvoke(System.IAsyncResult)
extern void FrameCallback_EndInvoke_mD7F48892748E545185953171D2C869E6D4A9FC56 (void);
// 0x0000033D System.Void Intel.RealSense.frame_callback::.ctor(System.Object,System.IntPtr)
extern void frame_callback__ctor_m617FAC0C1B0F1BA3DB8B09E66A9AF20972AACF60 (void);
// 0x0000033E System.Void Intel.RealSense.frame_callback::Invoke(System.IntPtr,System.IntPtr)
extern void frame_callback_Invoke_m5EEBA6EFD272540A4EA8B81CCA30F25DB7FF30F2 (void);
// 0x0000033F System.IAsyncResult Intel.RealSense.frame_callback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern void frame_callback_BeginInvoke_m5F56063EA0ED66B5983B9F7F201884C8ABC1A077 (void);
// 0x00000340 System.Void Intel.RealSense.frame_callback::EndInvoke(System.IAsyncResult)
extern void frame_callback_EndInvoke_mFD47334E72DE3D3E44321381EE6269F0F13A2893 (void);
// 0x00000341 System.Void Intel.RealSense.frame_processor_callback::.ctor(System.Object,System.IntPtr)
extern void frame_processor_callback__ctor_m438A19B40B879F633681F1928F53BAB3B794B60B (void);
// 0x00000342 System.Void Intel.RealSense.frame_processor_callback::Invoke(System.IntPtr,System.IntPtr,System.IntPtr)
extern void frame_processor_callback_Invoke_m546EBAE06E068D08B861EBB6C088A72BC982FD33 (void);
// 0x00000343 System.IAsyncResult Intel.RealSense.frame_processor_callback::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern void frame_processor_callback_BeginInvoke_mC2E9278C54E366E9CAAE14C324B43E455D716A65 (void);
// 0x00000344 System.Void Intel.RealSense.frame_processor_callback::EndInvoke(System.IAsyncResult)
extern void frame_processor_callback_EndInvoke_m65012EA8D4A5C109ED79BB00828B1472B170DB70 (void);
// 0x00000345 System.Void Intel.RealSense.frame_deleter::.ctor(System.Object,System.IntPtr)
extern void frame_deleter__ctor_m6B7222FF0DD26BE60F353A584D3F4D33D1674678 (void);
// 0x00000346 System.Void Intel.RealSense.frame_deleter::Invoke(System.IntPtr)
extern void frame_deleter_Invoke_m7561652636F0D1E3B70DA57691624454C26959D4 (void);
// 0x00000347 System.IAsyncResult Intel.RealSense.frame_deleter::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void frame_deleter_BeginInvoke_m06BEB228DEE381AE4A75504B21870FE574D1B7C7 (void);
// 0x00000348 System.Void Intel.RealSense.frame_deleter::EndInvoke(System.IAsyncResult)
extern void frame_deleter_EndInvoke_m34008B2EFC547F6ED9BEA39543EB1E9B7B121114 (void);
// 0x00000349 System.Void Intel.RealSense.rs2_devices_changed_callback::.ctor(System.Object,System.IntPtr)
extern void rs2_devices_changed_callback__ctor_m365B2C1EFB242BD1727B6F4377D02C3B7A6E0A3B (void);
// 0x0000034A System.Void Intel.RealSense.rs2_devices_changed_callback::Invoke(System.IntPtr,System.IntPtr,System.IntPtr)
extern void rs2_devices_changed_callback_Invoke_m18FCB0AF9FFBB40D57B741FE2EF95DF4EFFBC22B (void);
// 0x0000034B System.IAsyncResult Intel.RealSense.rs2_devices_changed_callback::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern void rs2_devices_changed_callback_BeginInvoke_m42049D26441860036AE2375D59BAB597B224345E (void);
// 0x0000034C System.Void Intel.RealSense.rs2_devices_changed_callback::EndInvoke(System.IAsyncResult)
extern void rs2_devices_changed_callback_EndInvoke_m2D671B7DD473C926CD3F1958608A7B04ED95B6E6 (void);
// 0x0000034D System.Void Intel.RealSense.ProgressCallback::.ctor(System.Object,System.IntPtr)
extern void ProgressCallback__ctor_mCA3D5749CAA2B251ED14FEDE5F15A2F83DF6A886 (void);
// 0x0000034E System.Void Intel.RealSense.ProgressCallback::Invoke(System.IntPtr)
extern void ProgressCallback_Invoke_mA6BDC658A31082A6F0E081773334715724CC5DDC (void);
// 0x0000034F System.IAsyncResult Intel.RealSense.ProgressCallback::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void ProgressCallback_BeginInvoke_m15119AD578F45928127A1A28693ACCA2ACB9A9A6 (void);
// 0x00000350 System.Void Intel.RealSense.ProgressCallback::EndInvoke(System.IAsyncResult)
extern void ProgressCallback_EndInvoke_m4C61DD14901A56A1F2885CDCAC6085FAD6F481C4 (void);
// 0x00000351 System.Void Intel.RealSense.rs2_update_progress_callback::.ctor(System.Object,System.IntPtr)
extern void rs2_update_progress_callback__ctor_m4177FBDF045840F22F20E45C625385B7EC0AC18B (void);
// 0x00000352 System.Void Intel.RealSense.rs2_update_progress_callback::Invoke(System.Single,System.IntPtr)
extern void rs2_update_progress_callback_Invoke_mEB4F43AA000AF5C68C61D1C8408A54E0333188A9 (void);
// 0x00000353 System.IAsyncResult Intel.RealSense.rs2_update_progress_callback::BeginInvoke(System.Single,System.IntPtr,System.AsyncCallback,System.Object)
extern void rs2_update_progress_callback_BeginInvoke_m958DEDFB7260C8E2857A6F533624960F6F7CE87A (void);
// 0x00000354 System.Void Intel.RealSense.rs2_update_progress_callback::EndInvoke(System.IAsyncResult)
extern void rs2_update_progress_callback_EndInvoke_m50FB7051B8857E05F5F00A8A7F71473B6519F693 (void);
// 0x00000355 System.String Intel.RealSense.Intrinsics::ToString()
extern void Intrinsics_ToString_m1EC19569E3A28C1E87695007C535124C2612454F (void);
// 0x00000356 System.Single[] Intel.RealSense.Intrinsics::get_FOV()
extern void Intrinsics_get_FOV_mCD5633FD7EA2692854593F3D726F4F523DA417DB (void);
// 0x00000357 System.Void Intel.RealSense.SoftwareVideoFrame::.ctor()
extern void SoftwareVideoFrame__ctor_mE348DBD924376C236983F6F3348DCE679BD9E56B (void);
// 0x00000358 System.Void Intel.RealSense.SoftwareVideoFrame/<>c::.cctor()
extern void U3CU3Ec__cctor_m5ADF3757F50CDE390116A181A58DEAD7B93B8EC0 (void);
// 0x00000359 System.Void Intel.RealSense.SoftwareVideoFrame/<>c::.ctor()
extern void U3CU3Ec__ctor_m03BA5A377312A9051CBFDFC2CB505C4258B5846A (void);
// 0x0000035A System.Void Intel.RealSense.SoftwareVideoFrame/<>c::<.ctor>b__8_0(System.IntPtr)
extern void U3CU3Ec_U3C_ctorU3Eb__8_0_m3EA1C499678CE1BBFB113F9CC2AF179C4CB81CC6 (void);
// 0x0000035B System.Void Intel.RealSense.SoftwarePoseFrame::.ctor()
extern void SoftwarePoseFrame__ctor_m46B4AA59F8BA69418C35215F3BDE870D72494A6C (void);
// 0x0000035C System.Void Intel.RealSense.SoftwarePoseFrame/PoseFrameInfo::.ctor()
extern void PoseFrameInfo__ctor_mBBEE6585B1060658A9E5EFCDDE2967E7BA780021 (void);
// 0x0000035D System.Void Intel.RealSense.SoftwarePoseFrame/<>c::.cctor()
extern void U3CU3Ec__cctor_m2EA13324360A821BE7390B9E0506E33747F5F01F (void);
// 0x0000035E System.Void Intel.RealSense.SoftwarePoseFrame/<>c::.ctor()
extern void U3CU3Ec__ctor_mD3658EE5C04AABC796710ED15251916DDC7E220E (void);
// 0x0000035F System.Void Intel.RealSense.SoftwarePoseFrame/<>c::<.ctor>b__8_0(System.IntPtr)
extern void U3CU3Ec_U3C_ctorU3Eb__8_0_mA68D18E0A12FB12E4B57EC6C024E35816DFD958C (void);
// 0x00000360 System.Void Intel.RealSense.SoftwareMotionFrame::.ctor()
extern void SoftwareMotionFrame__ctor_m5B700BF4766D849BAE2994093C28D7305E906D77 (void);
// 0x00000361 System.Void Intel.RealSense.SoftwareMotionFrame/<>c::.cctor()
extern void U3CU3Ec__cctor_mD08FF332CD56C1077534259B57097C6370035A8E (void);
// 0x00000362 System.Void Intel.RealSense.SoftwareMotionFrame/<>c::.ctor()
extern void U3CU3Ec__ctor_m501B7F74797A73F8693BD06FBCE19D668353FC87 (void);
// 0x00000363 System.Void Intel.RealSense.SoftwareMotionFrame/<>c::<.ctor>b__6_0(System.IntPtr)
extern void U3CU3Ec_U3C_ctorU3Eb__6_0_mF6660287FEA3850596CF18B1E938B83BBE8CE580 (void);
// 0x00000364 System.Void Intel.RealSense.Pose::.ctor()
extern void Pose__ctor_m1443039F19C19D730623BF387027CFB52D03D829 (void);
// 0x00000365 System.Int32 Intel.RealSense.InfoCollection::get_Count()
extern void InfoCollection_get_Count_m6529120B6D1CFE243DEE995706ED95164F5E0899 (void);
// 0x00000366 System.Void Intel.RealSense.InfoCollection::.ctor(Intel.RealSense.InfoCollection/SupportsDelegate,Intel.RealSense.InfoCollection/GetInfoDelegate,System.IntPtr)
extern void InfoCollection__ctor_m2862CD4104A5477E5A9D94AB51C94F58978923E0 (void);
// 0x00000367 System.String Intel.RealSense.InfoCollection::GetInfo(Intel.RealSense.CameraInfo)
extern void InfoCollection_GetInfo_m018400A298BA4BFB6266691E028579BA09412D6F (void);
// 0x00000368 System.Boolean Intel.RealSense.InfoCollection::Supports(Intel.RealSense.CameraInfo)
extern void InfoCollection_Supports_m3C5D898A1C74C0ECF06A4DDC2A310A80799214B1 (void);
// 0x00000369 System.String Intel.RealSense.InfoCollection::get_Item(Intel.RealSense.CameraInfo)
extern void InfoCollection_get_Item_m4B597199E8D463605288739DC5CF4D93B8C98D71 (void);
// 0x0000036A System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<Intel.RealSense.CameraInfo,System.String>> Intel.RealSense.InfoCollection::GetEnumerator()
extern void InfoCollection_GetEnumerator_m83AE5D867C8A6CA373AE7A36C7BD30C20B8CD161 (void);
// 0x0000036B System.Collections.IEnumerator Intel.RealSense.InfoCollection::System.Collections.IEnumerable.GetEnumerator()
extern void InfoCollection_System_Collections_IEnumerable_GetEnumerator_m54523B48BD924F8E373DDF04C9CD76C05677CE43 (void);
// 0x0000036C System.Void Intel.RealSense.InfoCollection::.cctor()
extern void InfoCollection__cctor_m08D80008B6B72CC0670D648585ADC7FDA3FF2A3F (void);
// 0x0000036D System.Collections.Generic.KeyValuePair`2<Intel.RealSense.CameraInfo,System.String>[] Intel.RealSense.InfoCollection/InfoCollectionDebugView::get_Items()
extern void InfoCollectionDebugView_get_Items_m9138BDD53B0FCEF6EF342E9913F74C892DBA3D33 (void);
// 0x0000036E System.Void Intel.RealSense.InfoCollection/InfoCollectionDebugView::.ctor(Intel.RealSense.InfoCollection)
extern void InfoCollectionDebugView__ctor_m2746D22D27B4840950A2AD5DFEBB78CE1D514AB2 (void);
// 0x0000036F System.Void Intel.RealSense.InfoCollection/GetInfoDelegate::.ctor(System.Object,System.IntPtr)
extern void GetInfoDelegate__ctor_m856290BEF7E827FFD7467F3E306EA49BCF754F2B (void);
// 0x00000370 System.IntPtr Intel.RealSense.InfoCollection/GetInfoDelegate::Invoke(System.IntPtr,Intel.RealSense.CameraInfo,System.Object&)
extern void GetInfoDelegate_Invoke_m1D4DE6A5220A9015C8C024A6073A6B97D42E24EC (void);
// 0x00000371 System.IAsyncResult Intel.RealSense.InfoCollection/GetInfoDelegate::BeginInvoke(System.IntPtr,Intel.RealSense.CameraInfo,System.Object&,System.AsyncCallback,System.Object)
extern void GetInfoDelegate_BeginInvoke_m735A28944864D5551E6ACBE7294A7BFF07EA8281 (void);
// 0x00000372 System.IntPtr Intel.RealSense.InfoCollection/GetInfoDelegate::EndInvoke(System.Object&,System.IAsyncResult)
extern void GetInfoDelegate_EndInvoke_m5957DE72C994D8F44132F9BB6E17199E24BD958D (void);
// 0x00000373 System.Void Intel.RealSense.InfoCollection/SupportsDelegate::.ctor(System.Object,System.IntPtr)
extern void SupportsDelegate__ctor_m5CE97BE47446D4E5A8D002D80F5B4E9C0F78E8C0 (void);
// 0x00000374 System.Int32 Intel.RealSense.InfoCollection/SupportsDelegate::Invoke(System.IntPtr,Intel.RealSense.CameraInfo,System.Object&)
extern void SupportsDelegate_Invoke_mC92658F95B0BC5818216A38776E158B54632AF3B (void);
// 0x00000375 System.IAsyncResult Intel.RealSense.InfoCollection/SupportsDelegate::BeginInvoke(System.IntPtr,Intel.RealSense.CameraInfo,System.Object&,System.AsyncCallback,System.Object)
extern void SupportsDelegate_BeginInvoke_m2926AB3763CEF8A0105629AF7279F89E1BB69821 (void);
// 0x00000376 System.Int32 Intel.RealSense.InfoCollection/SupportsDelegate::EndInvoke(System.Object&,System.IAsyncResult)
extern void SupportsDelegate_EndInvoke_m5935A74574791D9F743ECF6AF7345387B151BF95 (void);
// 0x00000377 System.Void Intel.RealSense.InfoCollection/<GetEnumerator>d__14::.ctor(System.Int32)
extern void U3CGetEnumeratorU3Ed__14__ctor_mF0A124B44054BB8EFA9B9F510B34876C9F280B8D (void);
// 0x00000378 System.Void Intel.RealSense.InfoCollection/<GetEnumerator>d__14::System.IDisposable.Dispose()
extern void U3CGetEnumeratorU3Ed__14_System_IDisposable_Dispose_mE679D458BA134456E8AB5DA0D38891F968D6A13C (void);
// 0x00000379 System.Boolean Intel.RealSense.InfoCollection/<GetEnumerator>d__14::MoveNext()
extern void U3CGetEnumeratorU3Ed__14_MoveNext_m8D5A6EABCB8C77EF21B499B166CE5CC6D338B450 (void);
// 0x0000037A System.Collections.Generic.KeyValuePair`2<Intel.RealSense.CameraInfo,System.String> Intel.RealSense.InfoCollection/<GetEnumerator>d__14::System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<Intel.RealSense.CameraInfo,System.String>>.get_Current()
extern void U3CGetEnumeratorU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CIntel_RealSense_CameraInfoU2CSystem_StringU3EU3E_get_Current_mF743FD979535545A8523F9055F9EB4F6B60783A1 (void);
// 0x0000037B System.Void Intel.RealSense.InfoCollection/<GetEnumerator>d__14::System.Collections.IEnumerator.Reset()
extern void U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_Reset_m8A7F6B1A8E72AFE1E153298A60678E207B3F0646 (void);
// 0x0000037C System.Object Intel.RealSense.InfoCollection/<GetEnumerator>d__14::System.Collections.IEnumerator.get_Current()
extern void U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_get_Current_m46DFAF5ACD6893BDDC194D6E11B9D96A8A0357AF (void);
// 0x0000037D System.Void Intel.RealSense.FwLog::.ctor(System.IntPtr)
extern void FwLog__ctor_m3E224F95A9241D5D1B19CE1407A8E7DA9BA4657D (void);
// 0x0000037E Intel.RealSense.FwLog Intel.RealSense.FwLog::Create(System.IntPtr)
extern void FwLog_Create_m98EF7BFAD034F94A6FB3160321BF863B1953EAE6 (void);
// 0x0000037F System.Byte[] Intel.RealSense.FwLog::GetData()
extern void FwLog_GetData_m0433172D8357A77EDB6F47569AF5D5D0019B0DEA (void);
// 0x00000380 System.Int32 Intel.RealSense.FwLog::GetSize()
extern void FwLog_GetSize_mF0FD8CE6C008ED3107471AC36275EC76E15DAAA8 (void);
// 0x00000381 System.UInt32 Intel.RealSense.FwLog::GetTimestamp()
extern void FwLog_GetTimestamp_m2469348154BF011A9BE54DD8F90ECE1DCD86BC1E (void);
// 0x00000382 Intel.RealSense.LogSeverity Intel.RealSense.FwLog::GetSeverity()
extern void FwLog_GetSeverity_m241A61910969C34BD76E5746EE694C9CA906C3D4 (void);
// 0x00000383 System.Void Intel.RealSense.FwParsedLog::.ctor(System.IntPtr)
extern void FwParsedLog__ctor_m1D6AC49AE14AC96488ACD1651AFFAF7D63A78D9A (void);
// 0x00000384 Intel.RealSense.FwParsedLog Intel.RealSense.FwParsedLog::Create(System.IntPtr)
extern void FwParsedLog_Create_mD7335934A97D9F146E01E61C26C0F4FF5849777B (void);
// 0x00000385 System.String Intel.RealSense.FwParsedLog::GetMessage()
extern void FwParsedLog_GetMessage_m07DBB1158704C5015DFCC7E24C8080D0634EB2A7 (void);
// 0x00000386 System.String Intel.RealSense.FwParsedLog::GetFileName()
extern void FwParsedLog_GetFileName_m75FE3FEC01B6B7016CB64158ED40A0689503DC8F (void);
// 0x00000387 System.String Intel.RealSense.FwParsedLog::GetThreadName()
extern void FwParsedLog_GetThreadName_m2FD3E85DB844BB98F03D88D2433DF618A61710DC (void);
// 0x00000388 Intel.RealSense.LogSeverity Intel.RealSense.FwParsedLog::GetSeverity()
extern void FwParsedLog_GetSeverity_m15CE52DD3813B3B88F9315B1DC4F127B0C99F073 (void);
// 0x00000389 System.UInt32 Intel.RealSense.FwParsedLog::GetLine()
extern void FwParsedLog_GetLine_m30B4917004F9835D28B0D62223ABAB4EDFA0BB18 (void);
// 0x0000038A System.UInt32 Intel.RealSense.FwParsedLog::GetTimestamp()
extern void FwParsedLog_GetTimestamp_m0BACF4BBD4D60F239076A7CABD9E7A8081715D31 (void);
// 0x0000038B System.UInt32 Intel.RealSense.FwParsedLog::GetSequenceId()
extern void FwParsedLog_GetSequenceId_mEB23771664A22CE394F981F7BBBD0FE24C1EE23E (void);
// 0x0000038C System.Void Intel.RealSense.TerminalParser::.ctor(System.String)
extern void TerminalParser__ctor_m9DAF9C1291BD3101462E601275A1464689B3A6DB (void);
// 0x0000038D System.IntPtr Intel.RealSense.TerminalParser::Create(System.String)
extern void TerminalParser_Create_mA1E2EB7A39C439B53200D530B97518F4C9B3A14F (void);
// 0x0000038E System.Byte[] Intel.RealSense.TerminalParser::ParseCommand(System.String)
extern void TerminalParser_ParseCommand_m65E43713C7323382DA906D1EF2CB3D472F375E1C (void);
// 0x0000038F System.String Intel.RealSense.TerminalParser::ParseResponse(System.String,System.Byte[])
extern void TerminalParser_ParseResponse_mE4D355349E3937728DDB1D497E1D45DFC553438F (void);
// 0x00000390 System.Runtime.InteropServices.ICustomMarshaler Intel.RealSense.ErrorMarshaler::GetInstance(System.String)
extern void ErrorMarshaler_GetInstance_mF32107DB4103B428050B388DA326BF6BD7157A5C (void);
// 0x00000391 System.Void Intel.RealSense.ErrorMarshaler::CleanUpManagedData(System.Object)
extern void ErrorMarshaler_CleanUpManagedData_mC7CB3712CA81F9E5EFD23702FE15AA5C7D7C3E20 (void);
// 0x00000392 System.Void Intel.RealSense.ErrorMarshaler::CleanUpNativeData(System.IntPtr)
extern void ErrorMarshaler_CleanUpNativeData_m396E99B68592F5A7F082D39BDA51762E6AFBD14D (void);
// 0x00000393 System.Int32 Intel.RealSense.ErrorMarshaler::GetNativeDataSize()
extern void ErrorMarshaler_GetNativeDataSize_mC8D48CA4726912A8A21206FAD539763B73425F11 (void);
// 0x00000394 System.IntPtr Intel.RealSense.ErrorMarshaler::MarshalManagedToNative(System.Object)
extern void ErrorMarshaler_MarshalManagedToNative_mBC4FD4DDA2D68F54E4879FCC1D12F3DA5FC5D3D3 (void);
// 0x00000395 System.Object Intel.RealSense.ErrorMarshaler::MarshalNativeToManaged(System.IntPtr)
extern void ErrorMarshaler_MarshalNativeToManaged_m5F0249135E448E34537B2858041C8C9F7FCD2196 (void);
// 0x00000396 System.Void Intel.RealSense.ErrorMarshaler::.ctor()
extern void ErrorMarshaler__ctor_m3813EA5C7E717E2FF3A221CC56496EA50C628CC3 (void);
// 0x00000397 System.Collections.Generic.Stack`1<Intel.RealSense.Base.PooledObject> Intel.RealSense.ObjectPool::GetPool(System.Type)
extern void ObjectPool_GetPool_m1FB065644C4F842455ECE14E0AFF1B7874532F8E (void);
// 0x00000398 System.Object Intel.RealSense.ObjectPool::CreateInstance(System.Type,System.IntPtr)
extern void ObjectPool_CreateInstance_mF43AFE7C86B1E745B232955BBBC4ED798C7FC649 (void);
// 0x00000399 System.Object Intel.RealSense.ObjectPool::Get(System.Type,System.IntPtr)
extern void ObjectPool_Get_mEF8CF0EA66093865B90A5CD2924861AE96DEE5D0 (void);
// 0x0000039A T Intel.RealSense.ObjectPool::Get(System.IntPtr)
// 0x0000039B System.Void Intel.RealSense.ObjectPool::Release(T)
// 0x0000039C System.Void Intel.RealSense.ObjectPool::.cctor()
extern void ObjectPool__cctor_m81050091036050683D1E6D579B78796B38724AAC (void);
// 0x0000039D System.Boolean Intel.RealSense.ObjectPool/TypeComparer::Equals(System.Type,System.Type)
extern void TypeComparer_Equals_mDE77B516A1C6A911A492C8705176CC4850B71263 (void);
// 0x0000039E System.Int32 Intel.RealSense.ObjectPool/TypeComparer::GetHashCode(System.Type)
extern void TypeComparer_GetHashCode_mEEA4F98A4E7467BFB07DD525B1774051C00D2DAF (void);
// 0x0000039F System.Void Intel.RealSense.ObjectPool/TypeComparer::.ctor()
extern void TypeComparer__ctor_mA08306E3D74D5BE8A41E9183CA280A28A297C223 (void);
// 0x000003A0 System.Void Intel.RealSense.ObjectPool/TypeComparer::.cctor()
extern void TypeComparer__cctor_m55784236A0D7E0E011504D482F479E73C0FEE9D4 (void);
// 0x000003A1 System.Void Intel.RealSense.Log::ToConsole(Intel.RealSense.LogSeverity)
extern void Log_ToConsole_m5CE7F767B08FBE087E0D9A7AA599557E2B87CEB3 (void);
// 0x000003A2 System.Void Intel.RealSense.Log::ToFile(Intel.RealSense.LogSeverity,System.String)
extern void Log_ToFile_m06C0B70261ADD546BFF25A307CB88708A80408B4 (void);
// 0x000003A3 System.Void Intel.RealSense.Log::LogMessage(Intel.RealSense.LogSeverity,System.String)
extern void Log_LogMessage_mD1E1B6256E22A409592CCDC5877D14CB0AC80D27 (void);
// 0x000003A4 System.Void Intel.RealSense.ICompositeDisposable::AddDisposable(System.IDisposable)
// 0x000003A5 T Intel.RealSense.DisposableExtensions::DisposeWith(T,Intel.RealSense.ICompositeDisposable)
// 0x000003A6 Intel.RealSense.Option Intel.RealSense.IOption::get_Key()
// 0x000003A7 System.Single Intel.RealSense.IOption::get_Value()
// 0x000003A8 System.Void Intel.RealSense.IOption::set_Value(System.Single)
// 0x000003A9 System.Single Intel.RealSense.IOption::get_Min()
// 0x000003AA System.Single Intel.RealSense.IOption::get_Max()
// 0x000003AB System.Single Intel.RealSense.IOption::get_Step()
// 0x000003AC System.Single Intel.RealSense.IOption::get_Default()
// 0x000003AD System.Boolean Intel.RealSense.IOption::get_ReadOnly()
// 0x000003AE System.String Intel.RealSense.IOption::get_Description()
// 0x000003AF System.String Intel.RealSense.IOption::get_ValueDescription()
// 0x000003B0 Intel.RealSense.IOptionsContainer Intel.RealSense.IOptions::get_Options()
// 0x000003B1 Intel.RealSense.IOption Intel.RealSense.IOptionsContainer::get_Item(Intel.RealSense.Option)
// 0x000003B2 System.Boolean Intel.RealSense.IOptionsContainer::Supports(Intel.RealSense.Option)
// 0x000003B3 System.String Intel.RealSense.IOptionsContainer::OptionValueDescription(Intel.RealSense.Option,System.Single)
// 0x000003B4 System.Int32 Intel.RealSense.OptionsList::get_Count()
extern void OptionsList_get_Count_mC206026C322760D9C08CB7342F5810F8E8869824 (void);
// 0x000003B5 System.Object Intel.RealSense.OptionsList::get_SyncRoot()
extern void OptionsList_get_SyncRoot_m925EDA0386DC4C0A07CBD6246DA09BCBD69A0F38 (void);
// 0x000003B6 System.Boolean Intel.RealSense.OptionsList::get_IsSynchronized()
extern void OptionsList_get_IsSynchronized_mB491913DB8E7D4756AB496AADFA70877E0BCFA6A (void);
// 0x000003B7 System.IntPtr Intel.RealSense.OptionsList::Create(System.IntPtr)
extern void OptionsList_Create_m256F9BA0D108A49AC5DCF1B1371DD1DDFB33B753 (void);
// 0x000003B8 System.Void Intel.RealSense.OptionsList::.ctor(System.IntPtr)
extern void OptionsList__ctor_m13F0A742D7E01D280C56C1CF6C25B07E4AA07F47 (void);
// 0x000003B9 Intel.RealSense.IOption Intel.RealSense.OptionsList::get_Item(Intel.RealSense.Option)
extern void OptionsList_get_Item_mA7F5C432AD276A572B10EE1D1D5BED4FE3D7893F (void);
// 0x000003BA System.Boolean Intel.RealSense.OptionsList::Supports(Intel.RealSense.Option)
extern void OptionsList_Supports_mC341A149D1146AA0BC6B18BA6C78C1D65EFAEF74 (void);
// 0x000003BB System.String Intel.RealSense.OptionsList::OptionValueDescription(Intel.RealSense.Option,System.Single)
extern void OptionsList_OptionValueDescription_m52D2494A442429CCB02C9FA271147664D7C573F0 (void);
// 0x000003BC System.Collections.Generic.IEnumerator`1<Intel.RealSense.IOption> Intel.RealSense.OptionsList::GetEnumerator()
extern void OptionsList_GetEnumerator_m8E22C4434DF2ED8B39AD467547E716F9F50FAE77 (void);
// 0x000003BD System.Collections.IEnumerator Intel.RealSense.OptionsList::System.Collections.IEnumerable.GetEnumerator()
extern void OptionsList_System_Collections_IEnumerable_GetEnumerator_mD411AFAFF93E4E14765567AEA7BF9B4235B5F84E (void);
// 0x000003BE System.Void Intel.RealSense.OptionsList::CopyTo(System.Array,System.Int32)
extern void OptionsList_CopyTo_mC2C08118B26A45BDD31A8F31270A25A3298B9112 (void);
// 0x000003BF Intel.RealSense.IOption[] Intel.RealSense.OptionsList/OptionsListDebugView::get_Items()
extern void OptionsListDebugView_get_Items_mFA775D80AA311365749E60D271F6A1DF3D8A74B7 (void);
// 0x000003C0 System.Void Intel.RealSense.OptionsList/OptionsListDebugView::.ctor(Intel.RealSense.OptionsList)
extern void OptionsListDebugView__ctor_m3E62B61EC361D62553E937C8A348172112E0780F (void);
// 0x000003C1 System.Void Intel.RealSense.OptionsList/<GetEnumerator>d__14::.ctor(System.Int32)
extern void U3CGetEnumeratorU3Ed__14__ctor_m22A827DAF7C4DC41545BA18862F39BA70FBAE68E (void);
// 0x000003C2 System.Void Intel.RealSense.OptionsList/<GetEnumerator>d__14::System.IDisposable.Dispose()
extern void U3CGetEnumeratorU3Ed__14_System_IDisposable_Dispose_mE7FEB0486BBCBFFDA06A6B0CE03DDBD6EBA49BC3 (void);
// 0x000003C3 System.Boolean Intel.RealSense.OptionsList/<GetEnumerator>d__14::MoveNext()
extern void U3CGetEnumeratorU3Ed__14_MoveNext_m08E5D45198916DCF0F46DD97CC2F2F222ED3BA5C (void);
// 0x000003C4 Intel.RealSense.IOption Intel.RealSense.OptionsList/<GetEnumerator>d__14::System.Collections.Generic.IEnumerator<Intel.RealSense.IOption>.get_Current()
extern void U3CGetEnumeratorU3Ed__14_System_Collections_Generic_IEnumeratorU3CIntel_RealSense_IOptionU3E_get_Current_m43B786BD219FC4EA8CFAFCC8E9D1B3B1BE8071FD (void);
// 0x000003C5 System.Void Intel.RealSense.OptionsList/<GetEnumerator>d__14::System.Collections.IEnumerator.Reset()
extern void U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_Reset_m431915313DC202404742CD1B7A14E2B159124D6F (void);
// 0x000003C6 System.Object Intel.RealSense.OptionsList/<GetEnumerator>d__14::System.Collections.IEnumerator.get_Current()
extern void U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_get_Current_m434103F141A42096830BC2486DDEF98732B64AB2 (void);
// 0x000003C7 System.Void Intel.RealSense.OptionInternal::.ctor(System.IntPtr,Intel.RealSense.Option)
extern void OptionInternal__ctor_m0E08310B0247757B9BBDB07BEC1D0FB1277AA7A9 (void);
// 0x000003C8 System.String Intel.RealSense.OptionInternal::get_Description()
extern void OptionInternal_get_Description_m2AE4AC80AB8B24B384BA957BFBFF13081AB41D68 (void);
// 0x000003C9 System.Single Intel.RealSense.OptionInternal::get_Value()
extern void OptionInternal_get_Value_m071FB97659CD8FA38B08FA4FCDEF7107E43D0EAC (void);
// 0x000003CA System.Void Intel.RealSense.OptionInternal::set_Value(System.Single)
extern void OptionInternal_set_Value_m55146946396657E09A4ED1CDF10940C99FF27599 (void);
// 0x000003CB System.String Intel.RealSense.OptionInternal::GetValueDescription(System.Single)
extern void OptionInternal_GetValueDescription_m309395029D6FDF192E34A69ABFEEE46DB757DB1E (void);
// 0x000003CC Intel.RealSense.Option Intel.RealSense.OptionInternal::get_Key()
extern void OptionInternal_get_Key_m5C88F38792F6FF8CA053935268071DBE184A75AA (void);
// 0x000003CD System.Single Intel.RealSense.OptionInternal::get_Min()
extern void OptionInternal_get_Min_m8F000E071C2782E45585D268E0DB96132DAEBEB3 (void);
// 0x000003CE System.Single Intel.RealSense.OptionInternal::get_Max()
extern void OptionInternal_get_Max_mD169BA520876157EB25BD39F0CE9F6D8516C8890 (void);
// 0x000003CF System.Single Intel.RealSense.OptionInternal::get_Step()
extern void OptionInternal_get_Step_mAD7B167B84AA43003E4ECBC07AC80D76C7DF0C8D (void);
// 0x000003D0 System.Single Intel.RealSense.OptionInternal::get_Default()
extern void OptionInternal_get_Default_m770ADBC74AEBAF7961FEFADD2F06DD9D5963963D (void);
// 0x000003D1 System.String Intel.RealSense.OptionInternal::get_ValueDescription()
extern void OptionInternal_get_ValueDescription_m7873A85314048DEFEA1C1779AEFD4A97FDE05EE2 (void);
// 0x000003D2 System.Boolean Intel.RealSense.OptionInternal::get_ReadOnly()
extern void OptionInternal_get_ReadOnly_m536A3B94D3028598A959654118A2A57016EAF08E (void);
// 0x000003D3 System.Void Intel.RealSense.Base.Deleter::.ctor(System.Object,System.IntPtr)
extern void Deleter__ctor_mABCF8707A24D88DBE18C71276BE7FC9D119689E0 (void);
// 0x000003D4 System.Void Intel.RealSense.Base.Deleter::Invoke(System.IntPtr)
extern void Deleter_Invoke_mA8A03EB1902848639734C12700F4D7A3863461F9 (void);
// 0x000003D5 System.IAsyncResult Intel.RealSense.Base.Deleter::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern void Deleter_BeginInvoke_m32FABC2737A1266A870A231071697F3DC9C22ED8 (void);
// 0x000003D6 System.Void Intel.RealSense.Base.Deleter::EndInvoke(System.IAsyncResult)
extern void Deleter_EndInvoke_m6BE3A185CCC34048A4FBCFCD0F169104275D665B (void);
// 0x000003D7 System.IntPtr Intel.RealSense.Base.DeleterHandle::get_Handle()
extern void DeleterHandle_get_Handle_mEFA023D4C0FCEDD5DA1FFC2C169E0AEE09296DE5 (void);
// 0x000003D8 System.Boolean Intel.RealSense.Base.DeleterHandle::get_IsInvalid()
extern void DeleterHandle_get_IsInvalid_m5C9C1AC778079EFCEFCCCEEB1960D0DA6578D7AA (void);
// 0x000003D9 System.Void Intel.RealSense.Base.DeleterHandle::.ctor(System.IntPtr,Intel.RealSense.Base.Deleter)
extern void DeleterHandle__ctor_mB4FDBAF55535905DB8B44DC1DB62A2F7B59B6AC9 (void);
// 0x000003DA System.Void Intel.RealSense.Base.DeleterHandle::SetHandleAsInvalid()
extern void DeleterHandle_SetHandleAsInvalid_mEA1B0CBC00948AEEA9480443109FE94CC2BA96DF (void);
// 0x000003DB System.Void Intel.RealSense.Base.DeleterHandle::Dispose()
extern void DeleterHandle_Dispose_mD4F4C5C3E5A65AABBCBBE7A5822CEBA139EA083D (void);
// 0x000003DC System.Void Intel.RealSense.Base.DeleterHandle::Dispose(System.Boolean)
extern void DeleterHandle_Dispose_mD3A0D35A7E37D2E56FD8761EE23983C377BC9D3C (void);
// 0x000003DD System.Void Intel.RealSense.Base.DeleterHandle::Reset(System.IntPtr)
extern void DeleterHandle_Reset_mE2ECBF662DA2146EFC3092268537B77DCD6C662D (void);
// 0x000003DE System.Void Intel.RealSense.Base.DeleterHandle::Reset(System.IntPtr,Intel.RealSense.Base.Deleter)
extern void DeleterHandle_Reset_m3B27FA65845C9E31E18329B210307AA86F84D857 (void);
// 0x000003DF System.Void Intel.RealSense.Base.DeleterHandle::Finalize()
extern void DeleterHandle_Finalize_mEE60A5C1911696117EB9994859C2E89E42CFDE8C (void);
// 0x000003E0 System.Void Intel.RealSense.Base.Object::.ctor(System.IntPtr,Intel.RealSense.Base.Deleter)
extern void Object__ctor_m6DF77A0CE068F1F3C037D14E2030DA468540E6E5 (void);
// 0x000003E1 System.IntPtr Intel.RealSense.Base.Object::get_Handle()
extern void Object_get_Handle_m96B34CD2853888B951499B2A690361475521027B (void);
// 0x000003E2 System.Void Intel.RealSense.Base.Object::Dispose()
extern void Object_Dispose_mF9CEF11582FACFF8209F0A1E82D4020309608293 (void);
// 0x000003E3 System.Void Intel.RealSense.Base.Object::Dispose(System.Boolean)
extern void Object_Dispose_m8EBCE4AF365CE2393E4B76B0764E8ECDD58852CF (void);
// 0x000003E4 System.Void Intel.RealSense.Base.Object::Reset(System.IntPtr,Intel.RealSense.Base.Deleter)
extern void Object_Reset_m7B418F064874B5B375C31A08F4FFCEDF379F27B3 (void);
// 0x000003E5 System.Void Intel.RealSense.Base.PooledObject::.ctor(System.IntPtr,Intel.RealSense.Base.Deleter)
extern void PooledObject__ctor_mE8AD5B256DAC557698B67C3E1C6061B8B1FB6E8E (void);
// 0x000003E6 System.Void Intel.RealSense.Base.PooledObject::Initialize()
// 0x000003E7 System.Void Intel.RealSense.Base.PooledObject::Dispose(System.Boolean)
extern void PooledObject_Dispose_m0250FF8608B96A963C6CF3C0ABD2973ACB839EE5 (void);
// 0x000003E8 System.Void Intel.RealSense.Base.RefCountedPooledObject::.ctor(System.IntPtr,Intel.RealSense.Base.Deleter)
extern void RefCountedPooledObject__ctor_m937F87C5F16602B33F222C90E9F1B4582E6F3EA9 (void);
// 0x000003E9 System.Void Intel.RealSense.Base.RefCountedPooledObject::Retain()
extern void RefCountedPooledObject_Retain_m16DB04E55B7F2F0CC28645F7942AEBF9452399BE (void);
// 0x000003EA System.Void Intel.RealSense.Base.RefCountedPooledObject::Dispose(System.Boolean)
extern void RefCountedPooledObject_Dispose_mD4826D5E95AC491FC8BBAB42509CCA4380F2CA67 (void);
// 0x000003EB System.Boolean Intel.RealSense.Base.RefCountedPooledObject::Release(System.Boolean)
extern void RefCountedPooledObject_Release_m2912A7DEC6C283D2BCA3896A3792B86D48843A74 (void);
// 0x000003EC System.Void Intel.RealSense.Base.RefCountedPooledObject::Initialize()
extern void RefCountedPooledObject_Initialize_m63CC31435A1F2C655080E84ABF5D80111D9E9DBE (void);
// 0x000003ED System.Void Intel.RealSense.Base.RefCount::.ctor()
extern void RefCount__ctor_mC2688B4E2EB0E183DD7B62EDEE4984A1CB7D598D (void);
static Il2CppMethodPointer s_methodPointers[1005] = 
{
	ContextHandle__ctor_m233DDCA29366F2BECBF9DFF737ACB4EE3A2C3D71,
	ContextHandle_ReleaseHandle_mDDEA9B2C3E424DBFE098CB250D5A437A0A605341,
	Context__cctor_m040D470E120C39BF8F0A1AFD9F09B9D3C1419A01,
	Context__ctor_m833D3312D73B2D956F3142714C1EB4CB7738A34A,
	Context_get_Handle_mE75F7A9639FAF5150A5324FAB8345C6E170CFA3D,
	Context_get_Version_mE03FFAA5CCCF967EBBC469A090D9B47D433282BA,
	Context_add_OnDevicesChangedEvent_mEA4D0DC321AD71B9E463B62DDF3581E07E9BD9D7,
	Context_remove_OnDevicesChangedEvent_m9367BFBAFD216048540C3B0CFAA6D7BC635981B5,
	Context_add_OnDevicesChanged_m409A40EEFB06AEA08ABD69A891EE9607AF8F55E3,
	Context_remove_OnDevicesChanged_mBC2222D0FD29A52AA5AA085751067843A45018A0,
	Context_QueryDevices_m9D15427411FD9D414A84F6E7866C5E2FB0A664F1,
	Context_get_Devices_m7B85FF2D892954686D44D57192612EFA3861DC7F,
	Context_AddDevice_m09B49E056C8FF38720A281FD3324A90557859C96,
	Context_RemoveDevice_m74C30BD78427357D64B7A4FC3AFB3FB6BBDDCA92,
	Context_OnDevicesChangedInternal_m13FD1F35326571A77CB41B2D4DA98479CF79E277,
	Context_Dispose_m0D0C45E1AB80FD8B255B9A6B47382724F9F29925,
	OnDevicesChangedDelegate__ctor_m4F10A9F2500370E61126A3811ECAF8DE4C9FFA99,
	OnDevicesChangedDelegate_Invoke_mA28AECD814E3B7FDBAD5BF41D2A02BD229F13FBD,
	OnDevicesChangedDelegate_BeginInvoke_mD0D926AE6C28ECF90289F0943967D5EAF8D960F1,
	OnDevicesChangedDelegate_EndInvoke_m3CDA36584DC7ACAEBEBEE5DB42C5EEB06200AE4E,
	NativeMethods_unix_memcpy_mF4CA73297BDC6F3BCD241E93555662679B1A10CC,
	NativeMethods_win_memcpy_mED6D571E6511E2D664C14F9EF3C1FF92B5D949AA,
	NativeMethods_rs2_create_record_device_mE39AA003C90861AB904EA7B8055F731C6899A4D0,
	NativeMethods_rs2_record_device_pause_mF6A3E53227B59C46EA8745C23EFF18C7925C2198,
	NativeMethods_rs2_record_device_resume_mDCB1D96F6BF8021445EAB0C6DDB8F1BEA5241B03,
	NativeMethods_rs2_record_device_filename_m674FF6580B951D0F40D19BD97E7F490EC533A9A4,
	NativeMethods_rs2_create_playback_device_mEFDC342B4EC647F70386032B0A39B3C790010532,
	NativeMethods_rs2_playback_device_get_file_path_mC22390E59A4C548179EEEC72F410CCBD2D210F57,
	NativeMethods_rs2_playback_get_duration_m96E2DAF51EF13A57C0E3F51A4A934D382E8C6584,
	NativeMethods_rs2_playback_seek_m6DF6363EF7CE5C4B2C2F88A4430A45E9769E55B5,
	NativeMethods_rs2_playback_get_position_mC1EDAEB53F7B5B3CC2E49932F1D88A226EDFEE6F,
	NativeMethods_rs2_playback_device_resume_m9D584C3E4DB12785837BBC3233F54FFBB0F7E9EE,
	NativeMethods_rs2_playback_device_pause_mDD209BD16A644F4BDEE252075AC20E09FA5B4695,
	NativeMethods_rs2_playback_device_set_real_time_m3EB6C0EA84571DC2DEDAD7E1B375FCDF201FCE3E,
	NativeMethods_rs2_playback_device_is_real_time_mC62B9E86F6308A579D3B6CC0D732AA8690BA55AB,
	NativeMethods_rs2_playback_device_set_status_changed_callback_mD1E63A26F718A102CAA08DB8B1C5D3B20AC518BA,
	NativeMethods_rs2_playback_device_get_current_status_m368DE607A3F16A21C054CF169B61036DCC574CE2,
	NativeMethods_rs2_playback_device_set_playback_speed_m37A722D9DCD602887B0F68EA4A560C2AC80F2EA0,
	NativeMethods_rs2_playback_device_stop_mB3D8C08E9679F9CCD2600731EC7983F350CBF9A7,
	NativeMethods_rs2_create_colorizer_m17ED34208949A660118ABD7162423E89855D7919,
	NativeMethods_rs2_create_sync_processing_block_m235218DBD0D8039200EDCEEAAFCEF26242C3FF06,
	NativeMethods_rs2_create_pointcloud_m16F2A011B4EE51CD87E112C9B5858669A615D70C,
	NativeMethods_rs2_create_processing_block_fptr_m5596D5594288FA499F9BE935A71B0C16595D12AA,
	NativeMethods_rs2_start_processing_fptr_m748FC6E151D140ED702D41840A93B81874B0917F,
	NativeMethods_rs2_processing_block_register_simple_option_mF1BC774BC77960A90D45B4A428FEAFB01835BDF5,
	NativeMethods_rs2_get_processing_block_info_m212C746C8457679262FFEC0FC74FE06BC290B546,
	NativeMethods_rs2_supports_processing_block_info_mF0C59E07DD19A6C4A7C2736A08313FDA72EE3810,
	NativeMethods_rs2_start_processing_queue_mBA03DB715377AD2A345BEF8A6E4127D70C4F5CA9,
	NativeMethods_rs2_process_frame_mA593E25C94B7891650B5F795D756593A59A0A398,
	NativeMethods_rs2_delete_processing_block_m65BBB633ABEF5E550E929F36D31C91ED231FB741,
	NativeMethods_rs2_create_frame_queue_m9ADD3DF73CFA877696CD162D4E96BD396CF367C6,
	NativeMethods_rs2_delete_frame_queue_m3F766079F45F2CA4E8F8F7854D3F8A290205BB2C,
	NativeMethods_rs2_wait_for_frame_m2B6153DBA21C3D30FD17968AE9FE99FA185E8896,
	NativeMethods_rs2_try_wait_for_frame_m4A5AA0FD5C8FD7A7C1DFEE468D072D21D50D32FC,
	NativeMethods_rs2_poll_for_frame_m0963CD0A7290C3A99ACE359DE3F810047F6EE820,
	NativeMethods_rs2_enqueue_frame_mA8E51BB312727836A31AC13C7C94F4A9A87E2A58,
	NativeMethods_rs2_frame_queue_size_m15227CC74F5C5DE6E3BB2D37FC4881716B856534,
	NativeMethods_rs2_create_align_m6166597BA34BFFA04D303178B3155971B02EC921,
	NativeMethods_rs2_create_decimation_filter_block_m907A6C505387D228A6EB1B37726D18A9298E575A,
	NativeMethods_rs2_create_temporal_filter_block_m52866A0FF0B0913DAD8C03F10D5FD8CBCD8BD874,
	NativeMethods_rs2_create_spatial_filter_block_mB724EFF932C6A0D37979A2AAB6EA9F1A944F85EF,
	NativeMethods_rs2_create_disparity_transform_block_m4EC2E99AA682FED415D8E866172FAF0AAB3436DD,
	NativeMethods_rs2_create_hole_filling_filter_block_m5EFD4BEB2A3A8D27DA7EE647C2DCC169922E6795,
	NativeMethods_rs2_create_threshold_m2085EB9BF0BDFA96CF383D14B407EB1D578129EC,
	NativeMethods_rs2_create_units_transform_mE75F100CD984B134C56524B7E7C5463B779465A2,
	NativeMethods_rs2_create_zero_order_invalidation_block_mA4A099BACFA3FB55E011DCEFA762DF07FF307CE6,
	NativeMethods_rs2_create_hdr_merge_processing_block_m838192C7B0B5AD86CFC6F975BF47D186520A8D0B,
	NativeMethods_rs2_create_sequence_id_filter_mF4672495680D51EB12B9CD239030CA1F8C6522F0,
	NativeMethods_rs2_is_option_read_only_mCA734DA41E3286FC6D5F314F0BB7C62FF03C703A,
	NativeMethods_rs2_get_option_m4AD3E2E5751C20F18B5DF8D0F9FF5216B4A37EAC,
	NativeMethods_rs2_set_option_mBED9319DA88BD157AF3DFEB63684BD80962E3D88,
	NativeMethods_rs2_get_options_list_m11963483875600DDCA8CCD16998CE1D67EDB77FB,
	NativeMethods_rs2_get_options_list_size_m9099C545D4EB2AD4BE82F28C5DEE35448A97A07D,
	NativeMethods_rs2_get_option_from_list_m1C3EC8777A8393E1DE37BCE0FA9568AAA90BEEBC,
	NativeMethods_rs2_delete_options_list_mDC1849485F8AE35A4E207298CB7609EBC4D02C89,
	NativeMethods_rs2_supports_option_m31FB9577147B4D27FDD9083C1FF9E5F77AD755AE,
	NativeMethods_rs2_get_option_range_mB513A947BAFD540D2268F480AE85BA506F05E5C9,
	NativeMethods_rs2_get_option_description_m23232B3D3E4AD3B5494EE6B4E8553C1EA6A92825,
	NativeMethods_rs2_get_option_value_description_m23F3E74B5F43172330F636CCB91E38C1CC63A9D7,
	NativeMethods_rs2_get_frame_metadata_mC4EDA55B04251B3695CF60A63A09272359FEA828,
	NativeMethods_rs2_supports_frame_metadata_mABAE87269735A1E408450782AFAB11B53E3273B8,
	NativeMethods_rs2_get_frame_timestamp_domain_mBD66EEAC534642DA6E5B83F415789ECD1E7C9D88,
	NativeMethods_rs2_get_frame_timestamp_m4D77D4291615D67A06E79E30ADE8D6ACC810EC7C,
	NativeMethods_rs2_get_frame_sensor_m746BFC2E4C6C7558E4EC861263F637AE4271EEEB,
	NativeMethods_rs2_get_frame_number_mECC97315C87B4154A15FDC100F105D28CCD65A84,
	NativeMethods_rs2_get_frame_data_size_mE7B0B28E4351E3C3BC2861634A5117CB8B751CE5,
	NativeMethods_rs2_get_frame_data_m74C79379E23473A1FD811F92FDDCC14D23CB9FF0,
	NativeMethods_rs2_get_frame_width_m8B4DAD7D990F83F1A40A3BA637BA8282D4F4CC4F,
	NativeMethods_rs2_get_frame_height_m0F7EBF6B64A76163F9BB04031029118BDACEF23A,
	NativeMethods_rs2_get_frame_stride_in_bytes_m431B6DDF01D92C8405656817D974B500D35B19F0,
	NativeMethods_rs2_get_frame_bits_per_pixel_m6BAE4A6B26A80B5342D524BE4B1267CACC22B4D4,
	NativeMethods_rs2_frame_add_ref_mA4E129565501E250B106C5C0AC3B7E2D81C141D6,
	NativeMethods_rs2_release_frame_mF77B3EEFB5257D2664DF1CC51F4C371B28D3769A,
	NativeMethods_rs2_keep_frame_mBFAF4E8E5F5E7EFAA2FA2F512B7F8357247C6CF0,
	NativeMethods_rs2_get_frame_vertices_mE98EF91E7710F257811CC0911701B6560CFAF764,
	NativeMethods_rs2_get_frame_texture_coordinates_m4D7217FD080FA2284AB809CC6C9ED337AB656B54,
	NativeMethods_rs2_get_frame_points_count_m5C0969E3437D3A4C42EC076DCC711C83B4A76268,
	NativeMethods_rs2_export_to_ply_m728335F655AB4C08D1FB696435A681FE2062771F,
	NativeMethods_rs2_get_frame_stream_profile_mF064863F9186B9ED2003582F02174341CC00F253,
	NativeMethods_rs2_is_frame_extendable_to_m5ED928FBC887124F87C92515943B3A2EA7AC0AD9,
	NativeMethods_rs2_allocate_synthetic_video_frame_m1D6A6F963646B6863B967D31A2F58E83D5D49C75,
	NativeMethods_rs2_allocate_synthetic_motion_frame_m5A7F6273A285E027B5D0BB0251505311C5463731,
	NativeMethods_rs2_allocate_composite_frame_mF9AAE472A86AAA0080044B11CA45AC8D8FCAF7AE,
	NativeMethods_rs2_allocate_composite_frame_m3DBF0C1358832170E56AD6BCE37A744B06D456BE,
	NativeMethods_rs2_extract_frame_m80069C176A28680AA1F3D29ECB540B00A2A111F5,
	NativeMethods_rs2_embedded_frames_count_m283AF389645374B0873EA88156BAD7142251961E,
	NativeMethods_rs2_synthetic_frame_ready_m9A1F219D71F492A08BE5259BC9EE668A6D24B252,
	NativeMethods_rs2_pose_frame_get_pose_data_mFFA7B7B50AC93E52AD523F7F65BB0FFAFD760C52,
	NativeMethods_rs2_delete_sensor_list_mCC338B4C18537D68A578632F849877EB1941AC03,
	NativeMethods_rs2_get_sensors_count_m4012BDD6D04928C291C6126357EF2F0417D6369E,
	NativeMethods_rs2_delete_sensor_mFA3E34B1A34779D7704BB1E2A92067ACF3DD6592,
	NativeMethods_rs2_create_sensor_m0A0AEF651456BA1BDCE5DA404B5BE1C679E815E2,
	NativeMethods_rs2_create_device_from_sensor_mCEB067F0B545F33607C15A8C440FF38B4858F6B7,
	NativeMethods_rs2_get_sensor_info_mB0EA85297EA04098A427C06F03F359CBBF369446,
	NativeMethods_rs2_supports_sensor_info_m64B19C02F0CF838BEA806C96A3166FA9E1F97265,
	NativeMethods_rs2_is_sensor_extendable_to_m0C0397F69E4FEC37C0B8FABD5E19D9F06F025C4D,
	NativeMethods_rs2_get_depth_scale_mACAD7E7E8D9B6C86DA7D35150014723D4328A2D9,
	NativeMethods_rs2_set_region_of_interest_m9879F1E8A43F9D18D6BF264F7908C5E0641B7801,
	NativeMethods_rs2_get_region_of_interest_m83E30DC8FD24B75768E4E3E08813EA643C257EFC,
	NativeMethods_rs2_open_m1AB784D616234AAC74DAC21A438382B713A47CA8,
	NativeMethods_rs2_open_multiple_m3AC1E4DACBE62478E3B31458AF587A7AFCC0694B,
	NativeMethods_rs2_close_m36ACE5CD630B8071F6A2F67FD1FE3593306F59A4,
	NativeMethods_rs2_start_m6C83B9D86B139C0A44E032FA4ECD949D1F9EA944,
	NativeMethods_rs2_start_queue_mFEFF52B1FE76580BD02AE7BFA2C9806C7481676D,
	NativeMethods_rs2_stop_m3CDC6089CE88ABFCAEE36DC54E491FEC2B90B2D5,
	NativeMethods_rs2_set_notifications_callback_m4715A403142208F24F54B14099CAEA34A1A197E7,
	NativeMethods_rs2_get_notification_description_mDF41E6E33B2CAFD61319A6622B146154D745C690,
	NativeMethods_rs2_get_notification_timestamp_m20E7BF7EBD102B1EDB31F80A167BC5D44C57EC5F,
	NativeMethods_rs2_get_notification_severity_mD410876DE1F55ADFE0041DB7DA577C0A42565461,
	NativeMethods_rs2_get_notification_category_m45E6184820B7661EBB0C687505F06EDEC9860731,
	NativeMethods_rs2_get_stream_profiles_m5DFCDDB005A112692E781FA402C06D2ECB9CBB62,
	NativeMethods_rs2_get_recommended_processing_blocks_m28D8313A4DA75FCA966CB7F090565329CFC912AA,
	NativeMethods_rs2_get_processing_block_m2B8719C7C95473E1B64B664C4948DFC952A235EF,
	NativeMethods_rs2_get_stream_profile_mBE4C5064AA21D19D24CA454168C2202DB950AC3F,
	NativeMethods_rs2_get_processing_block_mF824988671732443A0075760F7BEC83937EF8E53,
	NativeMethods_rs2_get_stream_profile_data_mB7DDBFC137235916F5CD5A4288594692998F69C9,
	NativeMethods_rs2_set_stream_profile_data_m6B5C12FFF7C8D40AEB61C4418C5CCF0158E33C98,
	NativeMethods_rs2_clone_stream_profile_mD70D13C4EEDA346EE8D6B8296D631F3A3577EC24,
	NativeMethods_rs2_clone_video_stream_profile_m26A1A17234895179A9595990E4EB73AFEA802BFB,
	NativeMethods_rs2_delete_stream_profile_mFC33D94ED6C96FF79D9E9489E06B4EB89B79F4AF,
	NativeMethods_rs2_stream_profile_is_mACA39789E9A5A0769E745498F9B9775F8B49A22D,
	NativeMethods_rs2_is_processing_block_extendable_to_mE3A29EF997CA3252373A4E4A1CA98F87BCDCC3CE,
	NativeMethods_rs2_get_video_stream_resolution_mF843C990A70663D16389FCBC5C9480636FA6B483,
	NativeMethods_rs2_is_stream_profile_default_m994C68E98E15AC76543DC957918CDBAB21DA3DEA,
	NativeMethods_rs2_get_stream_profiles_count_m58E16D384018E9BA09FD7A532617401167FDDC70,
	NativeMethods_rs2_delete_stream_profiles_list_mC30AE5B160B81DA73229E858F7D1DF4A4B055899,
	NativeMethods_rs2_get_recommended_processing_blocks_count_mA3F21F481BFE48CBFBD645A78873849293D4550A,
	NativeMethods_rs2_delete_recommended_processing_blocks_m47EA731403F5E325FE1A9445FADC1FD2A5321F77,
	NativeMethods_rs2_get_extrinsics_mCEA0BA5D3B33BE78A6F5125E77411B48FEF86773,
	NativeMethods_rs2_register_extrinsics_m123ACA202046FCEC5569FC8B837AAE4C223BDEAD,
	NativeMethods_rs2_get_video_stream_intrinsics_m310C35681CC70B189703A3C68F739B248ECC4645,
	NativeMethods_rs2_export_localization_map_m3F85C0172E647DBB4DE19CBE8CA6B22B6C1B0482,
	NativeMethods_rs2_import_localization_map_mCD507D04427C7B5DBBFA00CDC4F257C6CAC53258,
	NativeMethods_rs2_set_static_node_m8596A5C2CF2C81E137F5CEB747A7D81B1D0A9603,
	NativeMethods_rs2_get_static_node_mEA33E3FBB1E53B130912BCC08CE74CDE99E749FA,
	NativeMethods_rs2_remove_static_node_m500DDA1DBC847B78A1B86FE210B6BE7557BB9105,
	NativeMethods_rs2_load_wheel_odometry_config_m168681846C72060BD0808CA1751ACE11C414E8B8,
	NativeMethods_rs2_send_wheel_odometry_m199E9A72871CA5A57B0765643D2325FCE2B1389B,
	NativeMethods_rs2_get_motion_intrinsics_m90CC0069309BEB9FCF2EF2FD25F3A87B43FB4860,
	NativeMethods_rs2_get_max_usable_depth_range_m211CC2933B990F1CF8BD5028BFA3EDE3B61B719F,
	NativeMethods_rs2_get_device_count_m6F23BF7E07A8DA364B0656008B771FBABC68BC1F,
	NativeMethods_rs2_delete_device_list_mB22EDC1D9A2AFFA6AF15C9554E9C1F1757BDB955,
	NativeMethods_rs2_device_list_contains_m6E98D3B1D7C9683BD4C59106022678FFD4645ED5,
	NativeMethods_rs2_create_device_m49B01B79CCC4B79EEFE2FEEBD992C0119AD44A19,
	NativeMethods_rs2_delete_device_m6CB3FAC9AC6728DC67484772333A6DB3637A2924,
	NativeMethods_rs2_get_device_info_m98D5825400552F1BCEC85401F5E0DC1BD176F97C,
	NativeMethods_rs2_supports_device_info_mAA320484DC0CBABEAF11C01B0ED844BBFC9BA29A,
	NativeMethods_rs2_hardware_reset_mEA86BAF4252D7AFF2EEE2F183EDA44F2E7D1A076,
	NativeMethods_rs2_send_and_receive_raw_data_m60B079F956BC26C547922422BD2CAAF80CADE8E7,
	NativeMethods_rs2_build_debug_protocol_command_m23CA931D4DF567353F6A6F225B8D38DAC949C6FD,
	NativeMethods_rs2_is_device_extendable_to_m1CC17960440AF86D9CE3E97A44A5C119D1BD6D23,
	NativeMethods_rs2_query_sensors_m0B7E50C5A91FA4C8C59A034C7D0BC4D459BD7E2C,
	NativeMethods_rs2_enter_update_state_mF962CAD25981A8202B7DEF8342B92FD569D660FC,
	NativeMethods_rs2_check_firmware_compatibility_m1FFA6B573A29BD41666EA010A861F7DD9988BFB0,
	NativeMethods_rs2_update_firmware_m7CEB72B69C2B09FFE3714ABF4E2067D31E0B64CC,
	NativeMethods_rs2_create_flash_backup_mEEB790B8A8FB864DD9C87B7B56D8C0462F922918,
	NativeMethods_rs2_create_context_mE498A101ED2AD9AD4EDAFA2C07FB92AC38704B04,
	NativeMethods_rs2_delete_context_m4B103800EA9DEB0154802946829750506E9E924B,
	NativeMethods_rs2_context_add_device_m1F24EFD7DECE5027290C942DD88DC181E7F9C200,
	NativeMethods_rs2_context_remove_device_mD0D1DCAEFFA076BCC371107002DAA4AA2CDE99F0,
	NativeMethods_rs2_query_devices_m07F9F97F666ADEFA042BB25C8D33721B1A5A7792,
	NativeMethods_rs2_query_devices_ex_m6FB24560ABDADA4081C56F6872DD6B660F27A3F0,
	NativeMethods_rs2_create_device_hub_mBFD2BE33323E0266AF88D4F7380ADED48187A86F,
	NativeMethods_rs2_delete_device_hub_m68D741540D84E6A41E510ABCFB5D9716F422EA9E,
	NativeMethods_rs2_device_hub_wait_for_device_m723B7CBD5FAEA0F02D21A47A418959CD601F15E6,
	NativeMethods_rs2_device_hub_is_device_connected_mCCBCA6CD4FE0394CF4F7AE03606226BEE20DB6CD,
	NativeMethods_rs2_set_devices_changed_callback_mFB656DB2836A309DBCC41F6263AFA884AC90EB3B,
	NativeMethods_rs2_context_add_software_device_mF346BF90DA5E90AE80525580AFDD878BF2A5B73E,
	NativeMethods_rs2_get_raw_data_size_m9EE3890494451159C8850EEF7EFF7482CAEB2430,
	NativeMethods_rs2_delete_raw_data_mBDCE49D5E11ED68AD76BA9FD85BF9BA7B1D0ECC4,
	NativeMethods_rs2_get_raw_data_mD9BA44BF6F7EBC884E2534BAA5EC09877B075C35,
	NativeMethods_rs2_get_api_version_m5B8B8DF0177EE5BEBC87D166BE15A6D35005F7B1,
	NativeMethods_rs2_log_to_console_m2D6487FB2FB5F10B58FD10153BCAD40EB291D9DA,
	NativeMethods_rs2_log_to_file_mBC27A8846BBEF205C119654C0200325AB92A71FC,
	NativeMethods_rs2_log_m09AD2E21AFC7A06BDC428E7632D94AB5FE6BAB5A,
	NativeMethods_rs2_depth_frame_get_distance_mD954B58FBC8799654B58F902482D15CEECB1A6B4,
	NativeMethods_rs2_depth_frame_get_units_mB24B0907BD0287C55DED234152B2A02AF5C387D9,
	NativeMethods_rs2_depth_stereo_frame_get_baseline_m0265CD9D5BF7A5E3E588CD2FE03509CF16D4B957,
	NativeMethods_rs2_get_time_mD1BA7D7BCFF2436AA268BA4E71C234E6CC767681,
	NativeMethods_rs2_toggle_advanced_mode_mF675CBD993AB518429DC57AD0F8FD9380BD9A4EB,
	NativeMethods_rs2_is_enabled_mE1C332AA73AE328FADF348D7CE1BD078B084F0B8,
	NativeMethods_rs2_set_depth_control_m3EDAAB29BA675C9482840245A2C84C1E412677F3,
	NativeMethods_rs2_get_depth_control_m066ABB2960D8F8ED48ED6ABA79584B5145F0ABA2,
	NativeMethods_rs2_set_rsm_m0CBFF65022EFA62F2FE1E08AD50DA23CB06EEC43,
	NativeMethods_rs2_get_rsm_m02CB5A86DD9B15197A2D0FE44227850209A581E3,
	NativeMethods_rs2_set_rau_support_vector_control_mC9B04D91294946961568A74A2C57170DF6E4BE29,
	NativeMethods_rs2_get_rau_support_vector_control_m33AE99660AEF8AF2F39F5176A8D397904DDA96B3,
	NativeMethods_rs2_set_color_control_m5B2E7B5377AA1BA71431F9A2839CD05A002BD18F,
	NativeMethods_rs2_get_color_control_m254F75F62551C33A499F35FBD91FF19FD93BCFB8,
	NativeMethods_rs2_set_rau_thresholds_control_m8FB92110ADB59030797919936CE3F72A5DA2D2D6,
	NativeMethods_rs2_get_rau_thresholds_control_m448F36C1377AAA8D80811068023FE705C711B347,
	NativeMethods_rs2_set_slo_color_thresholds_control_mFDF121CD1BEF4822503FFA19ECD1AF7EE9AD5307,
	NativeMethods_rs2_get_slo_color_thresholds_control_m0FB82E72D31BC71B3565E73F15AA3F0A1042FA7B,
	NativeMethods_rs2_set_slo_penalty_control_mC734DA429324BB5FD8054387265A5EC43AA46150,
	NativeMethods_rs2_get_slo_penalty_control_m4638A59BEEA901D2E8E76323A685503693726DF0,
	NativeMethods_rs2_set_hdad_mC3895BB32662D629EBFF1C5F31BA33563ECC4993,
	NativeMethods_rs2_get_hdad_m35A94C480DFF5EDC597EF309EA663072E04FB3A5,
	NativeMethods_rs2_set_color_correction_m2316502BFB83D9CEDC6E64BBEE8B1A6A9A25E87A,
	NativeMethods_rs2_get_color_correction_m53F1EAA891DDEFDAAB0AE286090B76D394439101,
	NativeMethods_rs2_set_depth_table_m3CC09A505894E81630635C7E0A0289A5559AECE4,
	NativeMethods_rs2_get_depth_table_m3E5C7A0EAF64B9BA79E7DCF093C1184D3CDFABDE,
	NativeMethods_rs2_set_ae_control_m5CC0CC8327FBEE569EA3129C7601E7326D36CAD8,
	NativeMethods_rs2_get_ae_control_m0E8405269A6D6C04AAD8AFA6F89F02EC69A7D065,
	NativeMethods_rs2_set_census_m1A7D93340A05DCBFDF3D9FED0599492CC31E1334,
	NativeMethods_rs2_get_census_mC8E870D0A24E0615F2F0C977577B693F5EECB8D0,
	NativeMethods_rs2_set_amp_factor_m2D26BBDC75080FB77A95DE134FA9D259503D6832,
	NativeMethods_rs2_get_amp_factor_m1E3EDCDFDD2390139D5C6441617C48BEF0E6442C,
	NativeMethods_rs2_load_json_mA99BFA19E489AA49787E379B963CA85D4F6D841A,
	NativeMethods_rs2_serialize_json_m458FEA68DC9BB149F606EE4627F470FB3816C0E1,
	NativeMethods_rs2_write_calibration_m961E1C24819871A504F1233FB5C1905D686B5DC9,
	NativeMethods_rs2_reset_to_factory_calibration_m5757A46F4ECB7A19BCC1BCE357EB68195AD5A045,
	NativeMethods_rs2_run_on_chip_calibration_mAF8FB46C274860B1E9C24443CC289EE25DBCB165,
	NativeMethods_rs2_run_tare_calibration_mA766F0325E1D2F768A2EC49193AB7ACEB0D52D59,
	NativeMethods_rs2_run_focal_length_calibration_m9043D18A0BF01C4B99D43F9D4A0571F0AD19875F,
	NativeMethods_rs2_run_uv_map_calibration_m4C3A2C6F9D63CB14B730062728B979A259394183,
	NativeMethods_rs2_calculate_target_z_m1C3E97C0D6290CC8BC27FCFFAEBE031E790B3949,
	NativeMethods_rs2_calculate_target_z_m4A1B8BCC8293BBE6CDAF2FB63D61686E3BE4A015,
	NativeMethods_rs2_get_calibration_table_m5427D80C2E2D33758A6B06D0B8783F9B49A88DEE,
	NativeMethods_rs2_set_calibration_table_mF064114CE0609AD87870C34B6B9863B1885827FD,
	NativeMethods_rs2_create_recording_context_m6456A27CD64431A1C63D8E63D24A318E4CBE62BA,
	NativeMethods_rs2_create_mock_context_mFAF614EF3BE41F1AB9F2ACA4537AAD778219EFA2,
	NativeMethods_rs2_create_software_device_mAA0BA96CB43739F4392A916CD86C070B8F8BC141,
	NativeMethods_rs2_software_device_add_sensor_mEC73C3BD8559F1FD08CA20AD0A6AE3A05A6DD58B,
	NativeMethods_rs2_software_sensor_on_video_frame_m47F5231A2A20DA4E66A5BC144467AFDE64304ACB,
	NativeMethods_rs2_software_sensor_on_motion_frame_m4BAA8B9F5DFE63ED07BBCD4FD3C454C7E22B4250,
	NativeMethods_rs2_software_sensor_on_pose_frame_mB568A7A59C9BFE9983190E26C6B625F1F428ABA5,
	NativeMethods_rs2_software_sensor_set_metadata_m71A5D2CDD7543E0D99275883742A6AADB599C5C6,
	NativeMethods_rs2_software_device_create_matcher_m9F646C516B0CAA3681C85E4143385C1C8920DD83,
	NativeMethods_rs2_software_sensor_add_video_stream_m0A13A1BB501D63684BC1F9CD7159B7BEA940F458,
	NativeMethods_rs2_software_sensor_add_motion_stream_m268056FEB9F378D4A7503A1833E6AB93AFCBB83B,
	NativeMethods_rs2_software_sensor_add_pose_stream_m848D4E945D3F8CC8AE88956AF4BFB935FBA7FE1D,
	NativeMethods_rs2_software_sensor_add_read_only_option_m67E111A09B29C8116120251C0813CDA00793E418,
	NativeMethods_rs2_software_sensor_update_read_only_option_m837C9A09462BB9BEDD4895803E0BDBF66E748CCE,
	NativeMethods_rs2_create_fw_log_message_mFE92924E4FBFB2FE203C73156EC1C67C10188466,
	NativeMethods_rs2_delete_fw_log_message_m999472FDAE7412F21FD187AB76DD1330AC9EC766,
	NativeMethods_rs2_get_number_of_fw_logs_mEA3BAFB4C1AE9A7FA80110DA00A157F916EECAEA,
	NativeMethods_rs2_get_fw_log_m43881F44D77C906BA317CFAB0468EDA3CED8E2B9,
	NativeMethods_rs2_get_flash_log_mF4068963B89F9692EC41AEADDE28EC7EAC605F8E,
	NativeMethods_rs2_fw_log_message_data_mB24EBD63AEEFE529176C5E80A08A77509261AC0E,
	NativeMethods_rs2_fw_log_message_size_mEBF17681067428293425489C21003514FAC2B9FA,
	NativeMethods_rs2_fw_log_message_timestamp_m69FE7AE8355A21EE427353811167B029A22A6D08,
	NativeMethods_rs2_fw_log_message_severity_m1908665012D3B77C652121E0E41AF8DC4F778880,
	NativeMethods_rs2_init_fw_log_parser_m2859B6085858E17E510D029B86D75B517EC035B5,
	NativeMethods_rs2_create_fw_log_parsed_message_m7F546686DE9BBFCDE9C18ECD8235CF17B5297D0D,
	NativeMethods_rs2_delete_fw_log_parsed_message_m79571EDCAD6CB3546468205BD3659F3E1A8150C0,
	NativeMethods_rs2_parse_firmware_log_m538ABD633EE6A621D0D5F2283A44D712005C6C69,
	NativeMethods_rs2_get_fw_log_parsed_message_mE2BAF02457BB88C22F4937300F8469F35DBD49CA,
	NativeMethods_rs2_get_fw_log_parsed_file_name_m8CAE03F66A95CEEB7B5F7D3DB6D39BB02C3A7559,
	NativeMethods_rs2_get_fw_log_parsed_thread_name_mDF9DBFAD4F739F3FA71E768742FEE88A30655651,
	NativeMethods_rs2_get_fw_log_parsed_severity_m2111119543AA31604235E093F669AC18E4C8CE7E,
	NativeMethods_rs2_get_fw_log_parsed_line_m6D59AF4568A37C710ABAF688546ECB22058C2F4B,
	NativeMethods_rs2_get_fw_log_parsed_timestamp_m9736763A84653B97F31A1E5A34BAB56BF6F50FA3,
	NativeMethods_rs2_get_fw_log_parsed_sequence_id_m1D4BF8FCDE101C853F7E8DEC24DF24E4F314A033,
	NativeMethods_rs2_create_terminal_parser_mBC503CC841959C32EACCC7AAAB1D2EDCA9E3E4B3,
	NativeMethods_rs2_delete_terminal_parser_m13B49363BD175BD62A35A47D2C49617E7EF4CBEF,
	NativeMethods_rs2_terminal_parse_command_mDE96B91EC0BCA04C2FD2698A242951AD496DCE5F,
	NativeMethods_rs2_terminal_parse_response_mB387475AF11205AA4B24175C6D72B5EC46EC79C3,
	NativeMethods_rs2_create_pipeline_m9B60755C8AF1A33B15680DEF603983F62BE52FE9,
	NativeMethods_rs2_pipeline_stop_mD1EE44A557C0E6FEA2D70F3327618C9003B16707,
	NativeMethods_rs2_pipeline_wait_for_frames_m48A38A13E58F3ADDA43033BE1E4B5FA2AD351566,
	NativeMethods_rs2_pipeline_try_wait_for_frames_m9C56B9A3B011A7F009CC3FB150E69FB3AB231C15,
	NativeMethods_rs2_pipeline_poll_for_frames_m98A310F8CC803F4188F80D49128E41DB9F6812D3,
	NativeMethods_rs2_delete_pipeline_mFA8857EE985C5AC28C0AB1D150AE1B18775DD751,
	NativeMethods_rs2_pipeline_start_m07013C3BBC8A243F42EBCF4BB807B751DD839257,
	NativeMethods_rs2_pipeline_start_with_config_m769C04031C7253F4ED2748A1D41C7775B343827D,
	NativeMethods_rs2_pipeline_start_with_callback_m35792C7DC33259565DEAD212167A6C21E1762011,
	NativeMethods_rs2_pipeline_start_with_config_and_callback_mF1C7DE40F0C7A86A1F3B8AB0460356B62C560855,
	NativeMethods_rs2_pipeline_get_active_profile_mD4A3CB806E0227F1CE4F6C0A7CD9FC9069834026,
	NativeMethods_rs2_pipeline_profile_get_device_m5C4287664E567DE719AE5383E6EAF91DC4643788,
	NativeMethods_rs2_pipeline_profile_get_streams_m5AFA91FA1098B703D690ECEB6E17CC30BE72D1AC,
	NativeMethods_rs2_delete_pipeline_profile_mF450697991A0B36F68FC1799B780F43AF2D7B65B,
	NativeMethods_rs2_create_config_m735C45C92323AE931135124853434A1EA9C0BD4E,
	NativeMethods_rs2_delete_config_mCBF239111B36A5C167B2146FB935CF25B07F082B,
	NativeMethods_rs2_config_enable_stream_mAA6453E20401B2B043A3ADC9C5EB84AFE006EC2E,
	NativeMethods_rs2_config_enable_all_stream_mE02633F9A970A307F3316C12E8B869A7A5D2B9BD,
	NativeMethods_rs2_config_enable_device_mDFDC0673300DDCC7F868D86C7C2CFF9DF0C340FB,
	NativeMethods_rs2_config_enable_device_from_file_m9826EF0CE21930FA16567BD380AE3E3E246D1CED,
	NativeMethods_rs2_config_enable_device_from_file_repeat_option_mBC39F2E19E84C040FA919CD03DF1E64AEE091458,
	NativeMethods_rs2_config_enable_record_to_file_m0613A71371038256E9E3CCC2DA87270E1B5EF901,
	NativeMethods_rs2_config_disable_stream_m99203A8A34940390E7C1E297FFB2F9C718D495C9,
	NativeMethods_rs2_config_disable_indexed_stream_m80DBFE20C67D3303B2B3CD5705A88845629CCAE1,
	NativeMethods_rs2_config_disable_all_streams_m623154D52516F3C1DE1CA28DC566692797E8564D,
	NativeMethods_rs2_config_resolve_m6256675FC8DE4534A84D2E49502393477B0DD95C,
	NativeMethods_rs2_config_can_resolve_m1C6AC752D03749AC5918FA535BB8DA9165E7C990,
	NativeMethods_rs2_create_net_device_m82AA8A5C5B8B26FD36DB0EF2CC2CB335BA157892,
	NativeMethods_rs2_get_failed_function_mB1ACC53D6F98EBD995335D2F40042A4F56EBD847,
	NativeMethods_rs2_get_failed_args_m2F8C445166E5473706247214731448B93E5B9010,
	NativeMethods_rs2_get_error_message_m842829599ABE67AD67CBD31DC5E1BA94A1E5946A,
	NativeMethods_rs2_get_librealsense_exception_type_m357485000EA52BEEFEF04FCEF28C0BF9E843A9FE,
	NativeMethods_rs2_free_error_m5439B41C63D7579DACFCA844EA6B434F703F7797,
	NativeMethods__cctor_m1CAF30FFED3BA3C02DC2D759752AFD7F7A07B103,
	MemCpyDelegate__ctor_m72E5B98D688D4F60DB97295A0D41E46B8786035D,
	MemCpyDelegate_Invoke_m7B2CDF37BDEA32366C0A789E9EF76534B60DF87F,
	MemCpyDelegate_BeginInvoke_m955807FE13A566543A9688B6FE13094261B5630A,
	MemCpyDelegate_EndInvoke_m00EA97BC603AB0E39997DE9E451A6E321D05E531,
	MemCpy_GetMethod_mC2DF44BF333D2894B6F81AB2BCF29F44AAD96944,
	AdvancedDevice__ctor_mF37FA8C11660A0276F9565AD5AF4EDE056A9F1C4,
	AdvancedDevice_FromDevice_mD14AFA95944B8BCDF5B5F07EC3398BBFBAF61997,
	AdvancedDevice_get_AdvancedModeEnabled_mB15FEBF5C21A34D7429CEDC4770E5033C8A2CC79,
	AdvancedDevice_set_AdvancedModeEnabled_m34DD75F9EF36044A9588E8F3FAB89AA214B9068C,
	AdvancedDevice_get_JsonConfiguration_mC6CD4F6D5D129FA391BD3451B3DDD77472CA7854,
	AdvancedDevice_set_JsonConfiguration_mE4236F8DC3A62432A66CABEA6FB8DFA76F094D04,
	SerializableDevice__ctor_m8475841EC8CE5F347E7FB1D29BFD11D5635F7C6E,
	SerializableDevice_FromDevice_m73B252EB21A5DAF8BD30B9202EA3E3D87977B84D,
	SerializableDevice_get_JsonConfiguration_mD62D42DA4500CD31605BEAA2D7C8D3DB4EDADEFD,
	SerializableDevice_set_JsonConfiguration_m4AFC48C0F17D78A6DE3A53AB6F89B1301A35A329,
	AutoCalibratedDevice__ctor_m82138A77EBC91696D3ECDB85B83D5AA8DBA0BB9E,
	AutoCalibratedDevice_FromDevice_m25FF9B3151888976CD4D580BAF8936672CF5ADB1,
	AutoCalibratedDevice_RunOnChipCalibration_m37ECEE00B292CE7B05C61A99EF774E95ED3E62FE,
	AutoCalibratedDevice_RunOnChipCalibration_mF55F587C5685B39F166E0B73CAE31EB2D5862C07,
	AutoCalibratedDevice_RunTareCalibration_m029FCBC4C21DCEE557C4A68B98DDD0746F1A7B0A,
	AutoCalibratedDevice_RunTareCalibration_m8C287EAC764CFCF3FF6364BF0F69E7418245CA26,
	AutoCalibratedDevice_RunFocalLengthCalibration_m6248E72DDDAB85F34232237797617F9F63B0101E,
	AutoCalibratedDevice_RunFocalLengthCalibration_mBB67397BCCCE001C53A5547A629A3E246E65D087,
	AutoCalibratedDevice_RunUVMapCalibration_m0FBFF78B1ADA4411DB11FFCA2D5C827AD6D96824,
	AutoCalibratedDevice_RunUVMapCalibration_m75B63E91FFC0D7D8199C80CB1612589C4A7D8E50,
	AutoCalibratedDevice_CalculateTargetZ_m85506C1C6334F4F6E132665FDE17795EC63D23FB,
	AutoCalibratedDevice_CalculateTargetZ_m5D4E6A2AF6D539314D9113E31FCB9E842855AE7A,
	AutoCalibratedDevice_get_CalibrationTable_m5D8E61881591003279E9C450615A9A16DE3829A4,
	AutoCalibratedDevice_set_CalibrationTable_m3933EB51A32CCE5209B1C91B6DB91FB014F9FC38,
	AutoCalibratedDevice_GetByteArrayFromRawDataObject_m02020BCAA38A343FDAAAE71A817451B1048C0633,
	U3CU3Ec__DisplayClass3_0__ctor_m5762A8058D9EC47866D20FC1727F17BE4EEF0B46,
	U3CU3Ec__DisplayClass3_0_U3CRunOnChipCalibrationU3Eb__0_mBE20B178B6AF8045322B541E1B710C29A547E4DB,
	U3CU3Ec__DisplayClass5_0__ctor_m77D3125EC1BF3578C2908216BBEC02735845C98A,
	U3CU3Ec__DisplayClass5_0_U3CRunTareCalibrationU3Eb__0_m47F030D346B9AB3B2F02EF70DAB79B83A9F0AC6C,
	U3CU3Ec__DisplayClass7_0__ctor_mB1206C6E7E626CE714A5B87AB7D41A1E38C75B78,
	U3CU3Ec__DisplayClass7_0_U3CRunFocalLengthCalibrationU3Eb__0_m81FCEDDC7ACD4222A24B11CFDA89BC421085B867,
	U3CU3Ec__DisplayClass9_0__ctor_m1B3CC58E384615EA769E9A7D78A63D45A4EA50C5,
	U3CU3Ec__DisplayClass9_0_U3CRunUVMapCalibrationU3Eb__0_m79BBCB4E4C2FBCE2E8071F1DCC8B3A7BE555B701,
	U3CU3Ec__DisplayClass11_0__ctor_m72181A899BD13AFB1765D3E8FAAA8293816FC2A6,
	U3CU3Ec__DisplayClass11_0_U3CCalculateTargetZU3Eb__0_m57D4913A31E1668EF57CAA8CBF00E10C700474FC,
	CalibratedDevice__ctor_m4E587377112B053DD17A55698FB3513E708EC427,
	CalibratedDevice_FromDevice_mEBAAC7484332FFC3A34B7C1FBA72BDD0AA99FEE3,
	CalibratedDevice_WriteCalibration_m33151615427F70FF1901A09CA8B27D855C45268A,
	CalibratedDevice_reset_to_factory_calibration_mF262AC997814912F4E9070DDA340CE5FB22A741B,
	DebugDevice__ctor_m9F3CA7331781BBD21B049E76977166488FAAD0BA,
	DebugDevice_FromDevice_m2718B1F0A877D474C1529E026B3F8B391A6F7B38,
	DebugDevice_BuildCommand_m50AFE7CB7E7E598D3AB9CF2398436F0B09BEA305,
	DebugDevice_SendReceiveRawData_m7F5248F0558B047D4C7305DDFC83D6C20A273C11,
	Device_Initialize_m704F4BCD2AD2AEC35B91C182A87F956E1E82BABA,
	Device_Dispose_m1F2E2915BA2976223C17BEBE85581FBF05066385,
	Device__ctor_mB5BAC531CB1CE29FE2AE38215AD1BAF576283BD5,
	Device__ctor_mE601B51A6FF0EE87C5B9B8C1D2E53F29907C580D,
	NULL,
	NULL,
	Device_get_Info_m00D6466D210FCEA32987F7C9F59A7F90066B62D9,
	Device_set_Info_mF28C86F1AE42A089D1F83090787694A8866A24F3,
	Device_QuerySensors_m76B93648BB6BE863CA89AF77BFB85BC8D7B2EF91,
	Device_get_Sensors_mDF41564EB34A4A45BDDE051C28D49F7FB84B3A43,
	Device_HardwareReset_m2D98E50B155BB1202398E37BAEB23326CF41DF85,
	Device_Is_m2DD5B9A2CCC9A8728C724E1A63A88F1847433C10,
	NULL,
	Device__cctor_m4ED5A25AF2C47385F558B06C9D32D5C0B08796DB,
	DeviceList__ctor_m0D6146D7E15CB2257F425421EC227ED2E38BD4F6,
	DeviceList_GetEnumerator_mF1C600676BDAAA61B53769E6B8536871BCA21177,
	DeviceList_System_Collections_IEnumerable_GetEnumerator_m5A0A51513426E9CEEADB9123D4105467D2D5420E,
	DeviceList_get_Count_mD786F97BCFD463EE030CBD87C169FBE1F6FA674D,
	DeviceList_get_Item_m1A258A977AF6286515CD8BBBC2A842EE7BD2ECC1,
	DeviceList_Contains_mC38BF50157E6379197530E190A1B4D6B70BEE8FB,
	DeviceList__cctor_m303ACE71AEC85F9AD0306EA8CCA24DF70B8846C6,
	DeviceListDebugView_get_Items_mBDE77180F67F2CA525EA704C5A8613E1FB74DFE1,
	DeviceListDebugView__ctor_m01883A69B3CFD68114F9582C18A60798E0BFA1C7,
	U3CGetEnumeratorU3Ed__3__ctor_m16FF6E0BC9C85E243F3CF238D8DA07F1F4AB7792,
	U3CGetEnumeratorU3Ed__3_System_IDisposable_Dispose_m516ED126705C021E7F5E953D77F6AAD109A07E7A,
	U3CGetEnumeratorU3Ed__3_MoveNext_m727931AFCBACE906FFE76955C0CC85A79487E10D,
	U3CGetEnumeratorU3Ed__3_System_Collections_Generic_IEnumeratorU3CIntel_RealSense_DeviceU3E_get_Current_m7C8DFB85BCBEF9F30B94C88E1978F7E6FF894F88,
	U3CGetEnumeratorU3Ed__3_System_Collections_IEnumerator_Reset_m017CE480F6AE8AC7462375EE233D560CBDAA0F00,
	U3CGetEnumeratorU3Ed__3_System_Collections_IEnumerator_get_Current_m8D861BFA7CF51375CFBF4505FDB635F7B4DFB52D,
	PlaybackDevice__ctor_m263397325CCEB8901707E3766A9000429EF3E227,
	PlaybackDevice_FromDevice_m7186A018E1A5FA9E468D4B03E7C60D89FEF69302,
	PlaybackDevice_get_FileName_mFB0063573BE832327A693D437EB656A323F9DAE2,
	PlaybackDevice_set_FileName_mD8E562F9DC4BE1721784D44AFED8065240B673B8,
	PlaybackDevice_Pause_m17654D56D8C5B9D44356EC23DF0443D5A9960439,
	PlaybackDevice_Resume_mC7174472C0EDCBCE5A88AEE2D453A759FC21A5EF,
	PlaybackDevice_Stop_mA2CC6F1A3574FBBB2BEF14909FC130D43FCB91F2,
	PlaybackDevice_get_Status_m42D53B1A05AB31E9F6F1A207C702A02F0E9EBB43,
	PlaybackDevice_get_Duration_m6B3B9CF306238D81B123BC98D618788367838D3D,
	PlaybackDevice_get_Position_m0C05C94ECA246086C3155E864F667BC8FA7A25A4,
	PlaybackDevice_set_Position_m8651C9A703FC6A36CE6A560A6FC07EC74380F3E5,
	PlaybackDevice_Seek_m5FF2B50FEB656D4172F153773BF889687B8C7440,
	PlaybackDevice_get_Realtime_mF3D71F1FB89022207D4EE1E424DD202DE67C82E8,
	PlaybackDevice_set_Realtime_m633F6C9C15556718E6BD9439022ED09E73898657,
	PlaybackDevice_SetSpeed_mC6CCA3DD48CD06FAF3CAA91DB6D0199DA6C932FF,
	RecordDevice__ctor_mC215956B8F1AEEA6F80BA1DB961E6690E3508004,
	RecordDevice_Create_m9AE62CF79AF8AA1778AD2BBD7EBB573EAF296D78,
	RecordDevice__ctor_m792AD82750D2BD51AECBD0F23C90B9F2B9F7E78C,
	RecordDevice_FromDevice_m7D5DC6A4B6EE81420B819B5F0B81F8F1A0786541,
	RecordDevice_Pause_mF50FD389564E5F9A1057509BEF63019514AA9537,
	RecordDevice_Resume_m2361AF0DDCBE49958ECE4350ED6B01C948CF8B28,
	RecordDevice_get_FileName_mC9D78696835F27CACFE12C65FD1E1E46E6FA315F,
	SoftwareDevice_CreateSoftwareDevice_mB8D5404F5A0349635F2243AF22718C51DBFB89B9,
	SoftwareDevice__ctor_mF6AD88E490BC26DA60BB414482C6406C180F4DAE,
	SoftwareDevice_AddSensor_m6EC45E73C338A442F289B8156EED0A3713C9E15D,
	SoftwareDevice_AddTo_m98A529AA76EE772A013BBBA2EA053CEC53834A60,
	SoftwareDevice_SetMatcher_m81D92CDED174CB5A99374045014BA360C2D2CBCB,
	SoftwareDevice_AddSoftwareSensor_m918A443A8F39856507D0A62F71D3DF94A0A2E265,
	UpdatableDevice__ctor_m0CA135160BE26408D0A03AD568649B61D8AD799E,
	UpdatableDevice_FromDevice_m1FFBA9E2407E374C536C8A3B088FE0262B9E2ABA,
	UpdatableDevice_EnterUpdateState_m329ECC2FAC1636512DA67E5947316299DC35DD85,
	UpdatableDevice_CreateFlashBackup_mDBF8F4BFEA15EFC96D7C9287086F3B5C440E8C25,
	UpdatableDevice_add_OnFlashBackupProgress_mAE098253DA984BC99474F6F0369E82F42CCA5D6A,
	UpdatableDevice_remove_OnFlashBackupProgress_m89679A302055B3C7CD699256B4870C5CD9C1E131,
	UpdatableDevice_OnFlashBackupProgressInternal_m3D801930A7F2F71A263AA7E138C7364AF50D2973,
	UpdatableDevice_CheckFirmwareCompatibility_m5FD4D7470CC84425F3162DEC0EB3850C8F531675,
	OnFlashBackupProgressDelegate__ctor_mCC3BBB368BC92DF5BEC56FAC96571F950D2ED770,
	OnFlashBackupProgressDelegate_Invoke_mFEE7A556649A27E3F628C3245C953DF08359180D,
	OnFlashBackupProgressDelegate_BeginInvoke_m209435A12EF2D22E847F13362B3C266500D641FD,
	OnFlashBackupProgressDelegate_EndInvoke_mA9A994BCA4308CA4397F797556AE29249A3BBBD4,
	UpdateDevice__ctor_mD2BA25A9C661465FCC81FF8E01C79ADD0CB71D8E,
	UpdateDevice_FromDevice_m033FD8B7B7EB4C11506407C7F01865FB59AEB102,
	UpdateDevice_Update_mDDCF88702305D1076435498EE77E2922C30C07BC,
	UpdateDevice_add_OnUpdateProgress_m6699218939DE9DDB1D274A67D752787268F5E345,
	UpdateDevice_remove_OnUpdateProgress_m99B439BB5D3058B790EA09A879B98A9189975C81,
	UpdateDevice_OnUpdateProgressInternal_mFEA507B42632EEB2425B56A989F8BCC850B6DA44,
	OnUpdateProgressDelegate__ctor_m2C894C7018BAD9B77D8C449049089E3BF455BE1F,
	OnUpdateProgressDelegate_Invoke_m0E06A4D392B0DF46567CA6DE74AC5FA49328C68D,
	OnUpdateProgressDelegate_BeginInvoke_m90471DFCB69EA0B490AB3EB26FC8F4237DCD0BDA,
	OnUpdateProgressDelegate_EndInvoke_mFD46959FE5D23EF555E271FB058A7A1DF88E0344,
	FirmwareLogsDevice__ctor_m7A54F879EB7320D7C147D4CC6C1156AE51F08BEE,
	FirmwareLogsDevice_FromDevice_m7D845EE21F8014F650FA91A9F37BDBC30C24DD43,
	FirmwareLogsDevice_CreateFwLog_m323B1DE5EF0E5F02627390F79D679AB69AE38579,
	FirmwareLogsDevice_CreateFwParsedLog_m406E6B439ED6B7D28D5D651538F65748C520195D,
	FirmwareLogsDevice_GetNumberOfFwLogs_m0DFBC4E9E8446912133EE4BB8891BD0B20EDF8CC,
	FirmwareLogsDevice_GetFwLog_mF6828678377154C339D922E5EF0D7E08BFDC7E61,
	FirmwareLogsDevice_GetFlashLog_m4925C6B7BC15396AD1BB9EA9AE68BB60013B13FD,
	FirmwareLogsDevice_InitParser_m3F0CE921E505EFFE8EEB7FF40838286A43ADC7AB,
	FirmwareLogsDevice_ParseFwLog_mA9009331D28C9D2CDA41A170EB2EECF25D31AEDC,
	ProxyDevice__ctor_m644F32C594704D22E3E09C72DB65D8CCD983D5E3,
	DepthFrame__ctor_m7D7EDF8F28152998F95E2A24FBDB54F2B9154543,
	DepthFrame_GetDistance_m825158CE01CC20EB56B68C8998F2519CAA4D1988,
	DepthFrame_GetUnits_m1124CD209CCD6641ED639D2EB68960D0E2776B80,
	Frame_Initialize_m9E603330A0254F20639F995C11AFA2BA9A2E51F2,
	Frame__ctor_m7EC7D543E371F11B9F3210B3DB7B34646EEDDE4C,
	Frame_Create_mE2C4F43A4411DCABD43D91119E31268C88404978,
	NULL,
	NULL,
	Frame_Is_mA9198A531E7208F6252C5518D087B3A84A6791B5,
	NULL,
	NULL,
	Frame_Clone_mF83058E72A3E9821744A3036BB8381FAC9C4E314,
	Frame_Keep_m1FD46C819F406B19F92A57A2A43DB452CA152767,
	Frame_get_IsComposite_m648C8E9938F4DB3573D36DAA99804E79677F656E,
	Frame_get_DataSize_mAA1E18F42CD4C814DA51BE35895617AD46E70A7B,
	Frame_get_Data_m389421824EE87DA80C90E7FB114E661CD517C31B,
	NULL,
	Frame_get_Profile_m8F043F19E1A21F9B7CF8F4F7320AD490AEFFA07A,
	Frame_get_Number_mD1FD25DE73D0A80143DA0DD821721270114AC239,
	Frame_get_Timestamp_mAF87441277560E5072750CF5811082D5580D2995,
	Frame_get_Sensor_m63C61D6D61BF41ACE2B17ED5B5924E3E2BC63B43,
	Frame_get_TimestampDomain_mB8BF2A9AB6AF441DB536E6D65AE46684F5CE54BF,
	Frame_get_Item_m56BF9AF44D8D68FA776B60EF7B6BBACC3D1F0E9E,
	Frame_GetFrameMetadata_mB0DD97BB4CEF19B5E14235C763427524916E400B,
	Frame_SupportsFrameMetaData_m43EBC3D2929E609E2462F542CCC4FC7E272D6D35,
	Frame__cctor_mE1CE375C7DA96353D260120F092A8EC45B40B5A7,
	FrameQueue__ctor_m477645F5D4625D6724530C9B38E444FC1973DFC6,
	FrameQueue_get_Capacity_mFFFEDB439282B1CD98CBB10BD131736C7B4AD143,
	FrameQueue_set_Capacity_m398AF4F857410EDABD1AD08A48580494C7DB90B8,
	NULL,
	FrameQueue_WaitForFrame_mC2C5406889EFFB8568BFB15A3BBFEE374E6338A3,
	NULL,
	NULL,
	FrameQueue_WaitForFrames_mA78800DDFBDAF5DB64639C21F5E4AC01A711914A,
	FrameQueue_Enqueue_mF4EC82B1FD7C8CD68092809093D1ED92455BB969,
	FrameQueue_QueueSize_mB89295AC3670BC064E40D11CBCED3268DB389DE1,
	FrameQueue_Create_m8D5352017DB7C4278303ADF85DB39979433D74F7,
	FrameSet_FromFrame_mC4D8FB99205027B10D6E2EEE16F9326D03DAD854,
	FrameSet_FromFrame_m2DEA65EB2E96F5ACA9AECA2CA2BBF964F23F3B7B,
	FrameSet_Initialize_m0861739B7347DE375FBF5432C4428E0CD75E155B,
	FrameSet__ctor_mEFB45B62B1E09E1E7FE8C4CA2FBC7A9D928B6E42,
	FrameSet_get_IsComposite_m1B2003D595D88401F51A2A78289AB827F9680229,
	FrameSet_AsFrame_m5CB3564BB0AA874F5ABF5A5C7ECC559881CFFDAA,
	FrameSet_ForEach_mE35096BFCD425ADFA806DE4BD888C59C25551FEB,
	NULL,
	FrameSet_FirstOrDefault_m05098D277897D852E3957E431373CB10ABC82542,
	NULL,
	NULL,
	FrameSet_First_mA554E6FE80EAFB3FD9464B06269C6DC12D5B1EDA,
	FrameSet_get_DepthFrame_m12E45B244B4CB2D57ABE2201D21F17F833FAD377,
	FrameSet_get_ColorFrame_m01326230E137DCDDD8D22BA27756290A5661903D,
	FrameSet_get_InfraredFrame_mB55523FF3B3D51A0A0B980AA5F829AE887DBA63D,
	FrameSet_get_FishEyeFrame_m62E2BED022E97281F44644A8D01D5B8416D87BC0,
	FrameSet_get_PoseFrame_m41AF437B8B1DCB5906929434FA8913EFA9D574EB,
	FrameSet_GetEnumerator_mFAA8F1E47A721FB5DFA558F03EDD07C5E8134982,
	FrameSet_System_Collections_IEnumerable_GetEnumerator_m1924C92F96C3CADB51FCFFCAE0E9A04AC86984C9,
	FrameSet_get_Count_mC01C9A4D4FFEB2F08BAA41DC7E03D09EB11DAF1D,
	FrameSet_get_Item_mB4B5CFB225EB97A71D1ADCE2D7EA48DA75D38223,
	FrameSet_get_Item_m3DBF27AF34A951104B36499557D8588B119D67F9,
	FrameSet_get_Item_mF65495A453CF768F234582D0BFE81E286198BE79,
	FrameSet_Create_mFDFACBE56F74917252F72157FDAACC499A94AC98,
	FrameSet_Dispose_mDC694706686B799F6828B565514A47830C597954,
	FrameSet_AddDisposable_mC3E10585D9D436801150A5B2FFF4465DD073682B,
	Enumerator__ctor_m23AB5DC802E77937A14F266BBC048E7963E2CCDC,
	Enumerator_get_Current_m818F5B94FF36A570824FD32F3F98D604DFFCEAF2,
	Enumerator_System_Collections_IEnumerator_get_Current_m0480922637C3AC23AA88886A6A0C85253DD50D8A,
	Enumerator_Dispose_m2BF15DCBA7149637F7C0F696FD445E1F9DF7DED0,
	Enumerator_MoveNext_m3BE07BB85C18FF6F221927261DA42EB1005FA306,
	Enumerator_Reset_m47A51CDD4D243303CD3E2FB2841EF1C99D5564E4,
	U3CU3Ec__DisplayClass33_0__ctor_mDFC43F5E9FCF4867AEB955D0A3F793E86904C08B,
	U3CU3Ec__DisplayClass33_0_U3Cget_ItemU3Eb__0_m5C4CF67B4ABA104B84C82BF38D2B53929B7736A0,
	U3CU3Ec__DisplayClass35_0__ctor_m83CE77B7AB69A84BC3913407D97BAF8E2E0322AC,
	U3CU3Ec__DisplayClass35_0_U3Cget_ItemU3Eb__0_m444D9C2E3C673436C91C5F093A20A87A424456F3,
	U3CU3Ec__cctor_m387C326EDBB7BA04A921130007644DDA0819CCF7,
	U3CU3Ec__ctor_m1C77F8414FDB1E5D498D2EF80E7C2AC362BFC8C5,
	U3CU3Ec_U3CDisposeU3Eb__37_0_m56E6336C0281AEDF95A3470265815260121708D4,
	FrameSetExtensions_AsFrameSet_mB974C537911B6C1D620E5A3E3B77EBC6F2C152C2,
	NULL,
	FramesReleaser_AddDisposable_mFA2A5CE23F6DF78AD64D0B54AE56521D4EBA528F,
	FramesReleaser_Dispose_m5B3C4C9189B507B26DC44D302EB4FE051DA17AEF,
	FramesReleaser_Finalize_mBBEC3F8E1A7967183C6C2DF807A94FBA5022D4D7,
	FramesReleaser_Dispose_m24C733FB11C1B588283B4DC1F1F1CAFFE585BAC1,
	FramesReleaser__ctor_m06792F439AC8E28255405A9AE9E0F4222FC551DB,
	U3CU3Ec__cctor_m7576D0A6DE249ADDBB0E5E48ABA8FCDE643EF819,
	U3CU3Ec__ctor_mF2A3E9980568AFFACAC2B6FF12CEC3EF01852F55,
	U3CU3Ec_U3CDisposeU3Eb__4_0_m32C74F3133FA935EAC07F41AC169DED0A2DFB456,
	Points__ctor_mF4A0450532CE6B985DA6B21A9159F1B53FAF065C,
	Points_Initialize_m07303241AF2253D943DFCF5D477A4B3D3AD595BE,
	Points_get_Count_m7550BD795EABB0B1BDABD721E7B64DC21C2E813D,
	Points_set_Count_m1A4C788DE39B6AF8435271D270C7BAF3932C1D16,
	Points_get_VertexData_m4AD8749BEF06C7F6279259D48D9F86F7AF31BC91,
	NULL,
	NULL,
	Points_get_TextureData_mA75F755AC9A888252CF4FD726503D5047F9A3B67,
	NULL,
	Points_ExportToPLY_mCC582ED93437E1CB1508BC3703EB08ED6F2DA281,
	VideoFrame__ctor_m10909C88DC824D7BF97407AC731203C491E400FF,
	VideoFrame_get_Width_m01912E71FEE2712DA83872C49C33009D30064268,
	VideoFrame_get_Height_mA5E7858FD1B8C5A131C644774576A268C3B354F8,
	VideoFrame_get_Stride_m99437F231B6912F126497A2170A91B77058DFBA8,
	VideoFrame_get_BitsPerPixel_m9A0A9B21F092D46504FA2752942486AD6EE2DFCE,
	NULL,
	VideoFrame_CopyTo_m292A4842651205CDCEE1C8BBFCFF9060327083F5,
	NULL,
	VideoFrame_CopyFrom_m546BABFFE6138A4060D4B90F256505EAC6C999F4,
	DisparityFrame__ctor_m07129C0B418425F645F6512AA59C132FC13DE4B3,
	DisparityFrame_get_Baseline_m6555F64B181374CCE7A23AB1593C2E9180E5F8C4,
	MotionFrame__ctor_m2BC08CAEFFED538A8211ACE09320058A1F19707F,
	MotionFrame_get_MotionData_m544519D1C4A1BC88BEF63779964425D3E670B0BA,
	MotionFrame_CopyTo_m44984B253947C2F0D1A1625D4731820363CEC027,
	NULL,
	NULL,
	PoseFrame__ctor_m96F23D9802A65B9F270AD2E78CAAB57FA9C759A9,
	PoseFrame_get_PoseData_m358899D89BEB7FBCC81B15DB6745CBE16D35B05F,
	NULL,
	NULL,
	Config_Create_m667DA014A899677203659BABB931F1D673921C30,
	Config__ctor_m3F246BE25D516D7FF7B80636D35826DE46DFF423,
	Config_EnableStream_m320EE87B0F2C417B701790B10EFCD1907C33DB50,
	Config_EnableStream_m324BFB969D9DD3B932EEA96FACFC5BAAFC3443D3,
	Config_EnableStream_mC259D059519AE7D276D640B3BFCEB302DCE9A910,
	Config_EnableStream_m18E6C7740460E8D8D8B884E0C676D267E9F2515F,
	Config_EnableStream_mF36B75D07BBC3514EB64ECE74B34D47645AC3885,
	Config_EnableAllStreams_m1FAC992F7B91E34CB1904C0AD5E359CA386CE944,
	Config_EnableDevice_m443031EF609180AACC13419B4E4B7492F32A32F2,
	Config_EnableDeviceFromFile_mE80F9C8AB39A7D18A4803C7F971B02372E6BF8ED,
	Config_EnableDeviceFromFile_m469595B0A8B7DA906326FA289CEA67A016CA2356,
	Config_EnableRecordToFile_m932DC43A2DACCE52B49A1D34B63F0DC26F833516,
	Config_DisableStream_mD3B618D987C9C9F1340FF579E5D4AF3B9577496A,
	Config_DisableAllStreams_m8F9C1BBB35AF2D9630B3D38A543C854A94CE8ED7,
	Config_CanResolve_m4CF60E49D64C5049945B01E30AFD6979AFC79053,
	Config_Resolve_mEBF4570843321D1DD507F7B537F47BDA8D284C64,
	Pipeline_Create_m924A75EE6A555A41AEE7A08F2A1207385212984D,
	Pipeline_Create_m42B6027A8C41CD9D38A0D22832D341C276EE5792,
	Pipeline__ctor_m97EC9E399A7C7532907D51F25E3D6E71895DF9E5,
	Pipeline__ctor_mB26D36AA95DBE8030DF7695B3A21EB946648B794,
	Pipeline_Start_mEB081628F88C07B01662C7EC074B4049E318F000,
	Pipeline_Start_m70465DE73DAB473A322B4279D1C31115E5C2C5CE,
	Pipeline_Start_m6355F1AF0632929FFA49EFC011C8643987673FEF,
	Pipeline_Start_m7F1576FA13C18DC8EF9251F2E3562C9E48EF7055,
	Pipeline_Stop_m39FC7E91A96BA526BC9911169417C7A2C5D1BE6F,
	Pipeline_WaitForFrames_m9E9963C638C8AD3E35AE45BC5ECB28D2CC1543E8,
	Pipeline_TryWaitForFrames_m2A224A0DBBD313A71E4D17BBEB52363F308CAE3D,
	Pipeline_PollForFrames_mE28FEEA7977C600AB625B47B303DEC7534D06529,
	Pipeline_get_ActiveProfile_mC99DB95E780EBE71B067BA76873586E7D4E37C2D,
	U3CU3Ec__DisplayClass7_0__ctor_m49703CF4DE1D508261935D9023409830A403816C,
	U3CU3Ec__DisplayClass7_0_U3CStartU3Eb__0_m833F367E42B185F117DE020437561ED804C6380D,
	U3CU3Ec__DisplayClass8_0__ctor_mBC20DE3D0483D595C43A0D411D87A78827C7EB5D,
	U3CU3Ec__DisplayClass8_0_U3CStartU3Eb__0_mA10BA2BC12848857AD13180A8038ECD4668E9A73,
	PipelineProfile__ctor_m17794CC56B28A9ADEC3D2FC0BEDF7C3EEEEA5E18,
	PipelineProfile_get_Device_m6F894CF699D4DD81124E8EA1B79BFFD3DA287AA3,
	PipelineProfile_get_Streams_m4AB79670A85865858270FD144921D9E73D8FFEE6,
	PipelineProfile_GetStream_m2C78EA621B282F35FD1552B34E51F9D37B224029,
	NULL,
	Align_Create_m65E16BB6620D856DD70EBA468568C2803C8452D7,
	Align__ctor_m36AB1104A49AAA766D674C651C0152B0F22DD78A,
	Align_Process_mA91C9463FF791185AE28A769DE19E14DC5BB2FD0,
	Colorizer_Create_m64A466BAEF77BF13E4BCE020D4DD384F2833025A,
	Colorizer__ctor_m33DB2E49442E511A51A03B85BE613DBF5694B9C0,
	Colorizer__ctor_mA446F9E539CEDC82221A49AC58BC777759FE521C,
	Colorizer_Colorize_m4FAFAD28185727799B5334DDC4C722C5C03721AB,
	CustomProcessingBlock__ctor_mC714660C572ACD814B6B05755CD6A09C872BC171,
	CustomProcessingBlock_Finalize_m99AECC503080E3AC9C662F31ED53803D5EBAA325,
	CustomProcessingBlock_ProcessingBlockCallback_mE46EB7A1EBBA94A3BD62C0E76D62197CE5A66544,
	CustomProcessingBlock_get_Options_m0EB34B76C20D7A8551B297064B34956ADCF2550C,
	CustomProcessingBlock_set_Options_mB26C452A921440E9D714AE4C0DF3F771FB97940F,
	CustomProcessingBlock_get_Queue_m3D57961F5EF765441576D17B049D8E7997A7ADC4,
	NULL,
	CustomProcessingBlock_Start_m768D899DE9D5E2493F567141E2278CB20A907FCB,
	CustomProcessingBlock_Start_m03387AE81FCB6F51F91B55AC66397322F2A28973,
	CustomProcessingBlock_Start_m9E061EA79E953981E2E7D8F385907E7F9C7B7C6E,
	CustomProcessingBlock_RegisterOption_m594284E5FAA70850E7634AC40ACC757DC005FD63,
	CustomProcessingBlock_ProcessingBlockFrameCallback_m03DD7CC33C697A3D8AB3469F7BC238C8BAB7EC24,
	CustomProcessingBlock_Dispose_mC391F89D080A86E072DF135D47CCF1828891F70D,
	CustomProcessingBlock_Dispose_m30E965BD3AC43C2FB75BBDD92DE87C9B95284EFC,
	CustomProcessingBlock__cctor_mD7372818D94A4AB05D69D6F8D62AFB4B2BF0A370,
	FrameProcessorCallback__ctor_m18CFDC8C584A68B62A4557F5D76C615D7E298459,
	FrameProcessorCallback_Invoke_mFBC84C817A26B143FD45E96C7BCB0CD7AE273B38,
	FrameProcessorCallback_BeginInvoke_m828C064E8282B23EC0F23814BAC6254BADB8ECFD,
	FrameProcessorCallback_EndInvoke_mAAA1D95F2A4931EE1D4D54505C74CB785CE306B5,
	DecimationFilter_Create_m87CF6E398AA5C9B2FE70E90C6F38EE864C149669,
	DecimationFilter__ctor_m116187C994780C6F4936C091F2FFE1EF1E6EE2E8,
	DecimationFilter__ctor_m3300FAFCAD003C1C709D90010098EC2680B4AA36,
	DecimationFilter_ApplyFilter_m6EDC9A8B3318C15845BB16DF22B36C4BB32834A2,
	DisparityTransform_Create_mD159583BE086AE28FB5C5A96B2BEC2E009658660,
	DisparityTransform__ctor_mB0C1A94E3D847D263CC342D96D27FBCC7DA5DC60,
	DisparityTransform__ctor_m0AFE6883C9919FB4F5430DA2373688D5F18304ED,
	DisparityTransform_ApplyFilter_m2CC5D8FA2D33DE6A5A52C9D194CDAC5BB389DE12,
	FrameSource__ctor_mA8668D31C394FA6FCA1A41475AC15A3E0215FEB5,
	NULL,
	NULL,
	FrameSource_AllocateCompositeFrame_mFDB68FA935AE9FE7B306A8EE6D5EDBF5706CC89D,
	FrameSource_AllocateCompositeFrame_m9D3D367D2CC39F835EE6D42CC87671BDF22F62E7,
	FrameSource_AllocateCompositeFrame_m9E5D289E12132C8ACBB9E815F2DDE8B347F8F045,
	FrameSource_FrameReady_m00EABCFDF9B7EB76D5462FCFBCA4C4905B079932,
	HoleFillingFilter_Create_m82F319F966669C0761D4694155628D2EF297B054,
	HoleFillingFilter__ctor_mFF3AED5BEDD38F1BA84B84812CF4085675A64F92,
	HoleFillingFilter__ctor_mAEE464D5D59725587EE4EE1ACF7227BA97A9DF37,
	HoleFillingFilter_ApplyFilter_m4E7938AB38A59A46A3A284906D405192374BC45F,
	PointCloud_Create_m261755D36DDAB2FB09C6A724A22B13D9CB0C7A89,
	PointCloud__ctor_mAB7CBF07CDC4D4CCA9D7171FEE3B3DA5DA3AF43A,
	PointCloud__ctor_mDA364BEC240D836185E6F03BC8981B902652BB87,
	PointCloud_Calculate_m9201042DB8174DDFC691E964B05F1A8E725204EB,
	PointCloud_MapTexture_m4161393896F9576783597101F5A36B716A8DBBE1,
	NULL,
	ProcessingBlock_get_Options_m579A427FF3957C5D16C7AC2651FAD8E39CAF1354,
	ProcessingBlock_set_Options_mAEB856618F3860B607DCDCBAABD2AEB5D9CB6AB9,
	ProcessingBlock_get_Info_m12C672B3F2CDBDF3379560906D123601D09AD145,
	ProcessingBlock_set_Info_m39CA86A4EDC2359FBA71C3C596AF2C916CBA0EDA,
	ProcessingBlock_get_Queue_m1FDE72B050649E336AE40F477CFC567DEA31A1AA,
	ProcessingBlock__ctor_mBB81F4D8294B2AF5B2BE5307FDB941FDE2701935,
	ProcessingBlock_Process_mE99AA39FCBC3F1FF9490FEDF52D45722714F2CE9,
	NULL,
	ProcessingBlock_Dispose_m7D2F83DD0D827B618A4C74AA7F8719BC227CE7E4,
	ProcessingBlock_Is_m536B178EFD37EB403BE17586B4FFD231560D5849,
	NULL,
	IProcessingBlockExtensions_ApplyFilter_m4AC8D8761054498A26DC636D672A5863F170A295,
	SpatialFilter_Create_m502FCFC6D12B1B57BA62456864C37174F2B9F84A,
	SpatialFilter__ctor_m80EAC4869BCBD549E65E12AC397093913158D43E,
	SpatialFilter__ctor_mE9DEC7D0DA5EF1DDBD93697E0F8415019A03F2EB,
	SpatialFilter_ApplyFilter_m8BC8A38EEB916CC453698C6F8D51E184F35295F9,
	Syncer_Create_m254539CFB22DCC351BD8368B775E3DE6A649F22E,
	Syncer__ctor_m42DD0EAAB06541E566971781F857E9C68EF3C95E,
	Syncer__ctor_m33869E1A0033BC779326CEB70456DA7770864290,
	Syncer_SubmitFrame_mB60E5C88FE70725889109E77DF15FF5B434342A5,
	Syncer_WaitForFrames_m2C7C7AEAF94C93D9F1FCE45396521C0319D027C4,
	Syncer_PollForFrames_m46146BF662A19C653163CFC66BCB48AB2CDD3F17,
	TemporalFilter_Create_mE1825A30A86C1EC6A45914E63F0B561F15C27058,
	TemporalFilter__ctor_m81A821EB2001211AFC2160641967874B837E7706,
	TemporalFilter__ctor_m4A5D5D5C7FE7329505A69977C7461FFEDD4C9C90,
	TemporalFilter_ApplyFilter_m1EF69B9B84923F4655C538C200E0F5E81354EF30,
	ZeroOrderInvalidationFilter_Create_m61B550C230BAC29A0297CDA7C6BF871E04518097,
	ZeroOrderInvalidationFilter__ctor_mF6EAD2E4AAE3A9F80D3CD4C9404E819B3EA14E54,
	ZeroOrderInvalidationFilter__ctor_mA253B75219433632803774F8F7700252C2D99ED0,
	ZeroOrderInvalidationFilter_ApplyFilter_mCBB08FFBDF25E26FA0DD327DC46864ED0E6D31EE,
	ProcessingBlockList__ctor_m60CDF0EDFEEBC2F404547D64BB5CB28A2E1D307B,
	ProcessingBlockList_GetEnumerator_mDC1354306E9545929F4DDE8A678460A1FAC446A9,
	ProcessingBlockList_System_Collections_IEnumerable_GetEnumerator_m7DCF1AC9ECFA0C6FA547FC582D81587C1CC14616,
	ProcessingBlockList_get_Count_mD7C57A2791458FA2D4DA513D58739A468BD66BD8,
	ProcessingBlockList_get_SyncRoot_m1100401609E1B2C49B9F6325164E369A555D5149,
	ProcessingBlockList_get_IsSynchronized_mEE05B1CFCC75145722FDD2C180D8A4100E0A6B8D,
	NULL,
	ProcessingBlockList_CopyTo_mCBADE5A270C99A3D247213E30AC2BC8A722F7AC0,
	ProcessingBlockList_get_Item_mD44E8A2EFFA1E77054FAC664A91AB9AC0A8C0767,
	U3CGetEnumeratorU3Ed__1__ctor_m266D07C1A341838E3A5C97B468BBD1D6BA0775C0,
	U3CGetEnumeratorU3Ed__1_System_IDisposable_Dispose_mD8D86B7A71E1C59B467D781C0163FDC88FCA24F6,
	U3CGetEnumeratorU3Ed__1_MoveNext_mA041164DFF36AD28BAF5AFD87C33C9FD9D1EBF8D,
	U3CGetEnumeratorU3Ed__1_System_Collections_Generic_IEnumeratorU3CIntel_RealSense_ProcessingBlockU3E_get_Current_m8726C310338C11FB863FE82F14ECA36649840CBF,
	U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m5091A10841728405B60242565912507EA7EFF33A,
	U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_get_Current_mE5296A5BFD50D202F5658998554FDE3FB3DE738C,
	ThresholdFilter_Create_mCAABC6C2CA333AE6960300FE9D851F7AC6717626,
	ThresholdFilter__ctor_m8CB914E1BB38DFE2E721326C2B2F4834B7BBF375,
	ThresholdFilter__ctor_m7829CC83A469F6DF4F2683E3A310759AA86009F0,
	ThresholdFilter_ApplyFilter_m911981CD6D89A8F35C293B15A56A883A6424E001,
	UnitsTransform_Create_m475421D34F4FACF864B0C212171FE55A70D4DEEB,
	UnitsTransform__ctor_mCF3480472D06FFDF36DE0B4AFAA639208CC6EE90,
	UnitsTransform__ctor_mB8BB06672D306D7A11F93CDD85EEE65A1BABD1D2,
	UnitsTransform_ApplyFilter_m55CB08DA85B48AFA2D17F812DB94FC96545B1F8D,
	StreamProfile_Initialize_m5D1F4FBD1B6245A101D10C5A04986AE496ACB466,
	StreamProfile__ctor_m2F13BEC60F1D1D5BD4E855C8EB4E6B66FD789C73,
	StreamProfile_Dispose_m4B075D2793E7ECFF16FE3848DAB0972F4D475BAF,
	StreamProfile_get_Stream_mD0DDF21548F9306FE5D0E9482DED169A151D4324,
	StreamProfile_get_Format_m41C77E43AF55637FA711947D0E1942DE9D0853B4,
	StreamProfile_get_Framerate_m7BB20A16ED0E6C2938C70097AE08C8A00C80FEDB,
	StreamProfile_get_Index_mF3AF6675BC5BBBDA20F92BC444AF38138FE8799A,
	StreamProfile_get_UniqueID_mC731218BAA96C3EF140D6FB3912EC1B9E1E5640B,
	StreamProfile_get_IsDefault_m9F0B9C4A9C5A7BBA01A5AE933EBD975C85DE5A5A,
	StreamProfile_set_IsDefault_m3DE3C8911B4F82FE804C00E129160E0259549AA1,
	StreamProfile_get_IsCloned_m19D5B4D4813FE1975DC10185B0114745B0DE4355,
	StreamProfile_GetExtrinsicsTo_mBB4EDBF0DD49E06C15911861FAE9D17EE14D3780,
	StreamProfile_RegisterExtrinsicsTo_mCDE5835E1D13C4A760096007FF06AA8CC9A44109,
	StreamProfile_Clone_mF7F116C27D1059AE8E978C8E9644EAC43643D50C,
	StreamProfile_Is_m9384D565153B7D1781A4271A0995B33C9BEE005E,
	NULL,
	NULL,
	NULL,
	StreamProfile_Create_m243CD52C137189667F87C416B368A2CE2C73DE1C,
	StreamProfile__cctor_mBF0B6A2C705E19EFEE278F16F3D37836DCA7808C,
	StreamProfileList__ctor_m35CFBE709157E012AC4347EEC1EDD33F3F075F6D,
	StreamProfileList_GetEnumerator_m22C29E074EF07C598AA87E3F6F261938BFA45740,
	StreamProfileList_System_Collections_IEnumerable_GetEnumerator_mF5BC80FEF8B3814FB8C314D74BA008D7D8632579,
	StreamProfileList_get_Count_m7E209405799AE1262D3350418C8A0F746CDEB868,
	StreamProfileList_get_SyncRoot_mF2D209569A6BA3921D458ACC34DCA29ECA599714,
	StreamProfileList_get_IsSynchronized_m95E3BEC1201E0528FB3FDA8A5A8FF0D9D1164252,
	StreamProfileList_get_Item_mBD2A7EE6648608A0F5110D6C65345DBEEDFFC144,
	NULL,
	StreamProfileList_CopyTo_m0068191481ECBF8FE4BB71C99F34D9682E976D36,
	U3CGetEnumeratorU3Ed__1__ctor_m105A99820051D984F4C1D1DCAE4D47EB95DC41B6,
	U3CGetEnumeratorU3Ed__1_System_IDisposable_Dispose_m854A8BD349B6624BEDC7BCBF3684D063D50E47B3,
	U3CGetEnumeratorU3Ed__1_MoveNext_mF4E5648DED22907D21255D95FA8E2962A5F40CC9,
	U3CGetEnumeratorU3Ed__1_System_Collections_Generic_IEnumeratorU3CIntel_RealSense_StreamProfileU3E_get_Current_mB0AB532222E8AD49F6BFB215CFBAC6EF3710CCFD,
	U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m2ACA60A0A5BDE6A7E069F94A9807A99B28F872CA,
	U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_get_Current_m0B3E837D1617C05057C3B7B6C0643CD8F6E70301,
	VideoStreamProfile_Initialize_m8DEE5FE6FC8C1525A2294043C5E8BABB42BB3530,
	VideoStreamProfile__ctor_mF7CF11989EE9C7CA67202574A40BBC89B297E53C,
	VideoStreamProfile_GetIntrinsics_m6ED053473B83EF4FC3AD6C2ED583888D84E1C7FC,
	VideoStreamProfile_Clone_mF514B94F4EFE1CD929EAA51611AEF8651711A58E,
	VideoStreamProfile_get_Width_mA5C68D5575183BCDBF046393274514E44A8BCAFA,
	VideoStreamProfile_get_Height_mD3165342ABE9DD67613D4BFA7B673A68D6AB919A,
	MotionStreamProfile__ctor_m600B4A58AF540780048FE12E12FB3A80B087AB7A,
	MotionStreamProfile_GetIntrinsics_mAE38DCD126B218FAC50B7B6C3EF43EA5B27A004D,
	PoseStreamProfile__ctor_m7225E89D4B6DE2374B390528D67085927A339746,
	Sensor_Initialize_m61AEA740EC6CCF8A9EF813D7DFD301A0759E5457,
	NULL,
	NULL,
	Sensor__ctor_m83D9E2F39D350BEF301C73673BC2AB08BA49825D,
	Sensor_Dispose_m35E848822BD54426BD89186631FED11B0BE9FD2F,
	Sensor_get_Info_mE1FE6534D3EBC8F06730360221A87AD467800869,
	Sensor_set_Info_mDB5DB36200823B0444450A7409A576E044EBBA96,
	Sensor_get_Options_mB0F538BC407CE943D8A28DC448A30F2BF3847A7F,
	Sensor_set_Options_m9EBE6D8DE4D54227582F984106A080991CEEAB10,
	Sensor_Open_m58148D11C85338026DDF09DC4125B40039D43988,
	Sensor_Open_m601E3AE7AF9E8C26EC699677D192DD900E50BB92,
	Sensor_Start_m3AF58A5491941E19AAA93DF02DB990E8E49213AC,
	Sensor_Start_mDFC722BBFF7EA4BBFAEFD9A19770FB24E0DD2F5C,
	Sensor_Stop_mD459FF73605C5E3BB964AC1E26CF7640C30DCCA6,
	Sensor_Close_mC8F58B024215E566860AA68F034E19DA2960564C,
	Sensor_Is_mDC62202E43050DE23E1FDD4B06222310FD59DA85,
	NULL,
	Sensor_get_DepthScale_mD3D761CF297DFAA67DF0CEAB7310B241999F7E03,
	Sensor_get_AutoExposureSettings_mA65A3D1B87A45F1AA36CC87458C3A030AE835A6C,
	Sensor_get_StreamProfiles_m2495C684F23B82E6B15B82DD931BB18221154FA3,
	Sensor_get_ProcessingBlocks_m0D7B2F2FD08072DEB5454067C57D0136FFE1DBD3,
	Sensor__cctor_m98CC07403EADC67BE4277667E5F871B4E6674E9B,
	CameraInfos__ctor_m1A40507493C7B0AAD5B8715070BEA7C2DCADE916,
	CameraInfos_get_Item_m20B76CBFFBA81412FDE3B79BCB261A7F492EBDF1,
	CameraInfos_GetEnumerator_m5811EA6CCF7579565D3551E38C1C9457B23E848B,
	CameraInfos_System_Collections_IEnumerable_GetEnumerator_m0D6A93D9EC40A220299CC83F67D68E6BBD7F070A,
	CameraInfos__cctor_m5E796322357B8B75063AF5EE8FA128ADFE7924E8,
	U3CGetEnumeratorU3Ed__5__ctor_m6DCE0B340B8FB362E04AD6169BC127A06B64E1FA,
	U3CGetEnumeratorU3Ed__5_System_IDisposable_Dispose_m5223E8E16C4BF4F059DBB2358FFC00692EC2C472,
	U3CGetEnumeratorU3Ed__5_MoveNext_mB6E4B90679E75AFCB630E4AF1AAE9461F23E4060,
	U3CGetEnumeratorU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CIntel_RealSense_CameraInfoU2CSystem_StringU3EU3E_get_Current_m104CE4DFB83FD7B14A91CC319468A952F62C1355,
	U3CGetEnumeratorU3Ed__5_System_Collections_IEnumerator_Reset_mD5DC123A862E063B11EC07C17C3CED3677A7ADCA,
	U3CGetEnumeratorU3Ed__5_System_Collections_IEnumerator_get_Current_m6289A62168BE276D900F06FE9FDA632BF5F308C2,
	U3CU3Ec__DisplayClass21_0__ctor_m0A564D155C9F7D6EEBA26C0AC7B3C9E4A4ED3A72,
	U3CU3Ec__DisplayClass21_0_U3CStartU3Eb__0_m899BFA7019110866D7B608676F4E0B11E564E875,
	SensorList__ctor_m9350F20CA413C985934E5F4E1DB3F841B87562CD,
	SensorList_GetEnumerator_mD6B02A8E893610B50B571DA877F40EFF0B262907,
	SensorList_System_Collections_IEnumerable_GetEnumerator_m3508581FCFEED3456317A4C92D5AA9DB73E28422,
	SensorList_CopyTo_mF63876E72983647D1499E32BBA0F4B5D4ACACE78,
	SensorList_get_Count_m33B8195A3FCC38CDD27D29F414CA7D7BEC7FACFE,
	SensorList_get_SyncRoot_mD41F16F82FA7D25F21F0D2E37A65AE7CD972E842,
	SensorList_get_IsSynchronized_m3D7D527328E63FA2E58E2B5CBC24E3F41F626812,
	SensorList_get_Item_m0B4F9DD244FA171604E0F99F032726DE4D7C9567,
	U3CGetEnumeratorU3Ed__1__ctor_m00F0A220891E04B6C33164F8E5F03140C2041177,
	U3CGetEnumeratorU3Ed__1_System_IDisposable_Dispose_m1C7ECF8476B3236CAA4467CE42B73F6807DE9C93,
	U3CGetEnumeratorU3Ed__1_MoveNext_m8B6F5D9E4DD8662B43034443716AC4B1415A6F7E,
	U3CGetEnumeratorU3Ed__1_System_Collections_Generic_IEnumeratorU3CIntel_RealSense_SensorU3E_get_Current_m34CF4DB190F450E993F089126DC3AAC108A1E9A7,
	U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_mE8456A19B3EC6BAB815FBD0FFB7A8804E356C9F8,
	U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_get_Current_mC4E3AEDBF04F0DA8ED2D2666DAAFBA235F3A2B40,
	SoftwareSensor__ctor_mAE910AF5A53761F5E7A0475A3BA12D83A6AF3A4F,
	SoftwareSensor_AddVideoFrame_mFF0905C2D171BF4C0BA690F0FCDAB50D06F8E4F9,
	NULL,
	SoftwareSensor_AddMotionFrame_m71BDA677BC48DA1F3F08122307BDC497C1AF30B8,
	SoftwareSensor_AddPoseFrame_m4ACAF7ED910B6368FDDF24CD3EAFBC166B497BD8,
	SoftwareSensor_AddVideoStream_mEEA13AF0B87BCC0FF420C78006D3978AA6F889F8,
	SoftwareSensor_AddMotionStream_m054226F42624E200797F2328C86A4E58CD9EABF3,
	SoftwareSensor_AddPoseStream_m9E352E4983D3D28CE3ABC22CE6730E927CF70C01,
	SoftwareSensor_SetMetadata_mE007471C92A1447277894D8795410614E80552EA,
	SoftwareSensor_AddReadOnlyOption_m091F1CA9998424B567B5F859856B4FAC98A533FF,
	SoftwareSensor_UpdateReadOnlyOption_mE2625615DC2BD72B102C52CE70BF9C85BC351EC0,
	NULL,
	NULL,
	NULL,
	PoseSensor__ctor_mA62C564E1DED6125EC8B71491E174D8AAFE5E5A9,
	PoseSensor_FromSensor_m1921C0B201ADA2554BED7B951DEF13F45FFC2315,
	PoseSensor_ExportLocalizationMap_mB93754439F973C2EE9449147B0A0DE393F9540F3,
	PoseSensor_ImportLocalizationMap_m2A2107DEBBBAA901AA170AD59E62B18BFDA873EF,
	PoseSensor_SetStaticNode_m3B01C072B5E096A5C6643225F33C4B9CD43CCF5F,
	PoseSensor_GetStaticNode_m8D6A6EBED24EE77B1713D145A3EED018E8DFAD92,
	MaxUsableRangeSensor__ctor_m2537977B15418DC9CA4410148C39F0CF506548BC,
	MaxUsableRangeSensor_GetMaxUsableRange_m74A4E386FA49864946B9A6962FE67840BDC8C174,
	AutoExposureROI_GetRegionOfInterest_m5FBB4F9CBA27233E672F45DE15F1185ACB656DBA,
	AutoExposureROI_SetRegionOfInterest_mFB1924CC42FD335650D0DF5020B1211925C6BAD4,
	AutoExposureROI__ctor_mB3D6930A23FDDD2A3C9E41C6F6C0E406D9BF8C85,
	FrameCallback__ctor_m354B1E847C20129E9151A191DCDA77F9B2CEFB46,
	FrameCallback_Invoke_m960F646C59099FC30777D80B8F8494929B9ACFD2,
	FrameCallback_BeginInvoke_m26F2EF3C34391D2CB96354EC4F05A7347C459263,
	FrameCallback_EndInvoke_mD7F48892748E545185953171D2C869E6D4A9FC56,
	frame_callback__ctor_m617FAC0C1B0F1BA3DB8B09E66A9AF20972AACF60,
	frame_callback_Invoke_m5EEBA6EFD272540A4EA8B81CCA30F25DB7FF30F2,
	frame_callback_BeginInvoke_m5F56063EA0ED66B5983B9F7F201884C8ABC1A077,
	frame_callback_EndInvoke_mFD47334E72DE3D3E44321381EE6269F0F13A2893,
	frame_processor_callback__ctor_m438A19B40B879F633681F1928F53BAB3B794B60B,
	frame_processor_callback_Invoke_m546EBAE06E068D08B861EBB6C088A72BC982FD33,
	frame_processor_callback_BeginInvoke_mC2E9278C54E366E9CAAE14C324B43E455D716A65,
	frame_processor_callback_EndInvoke_m65012EA8D4A5C109ED79BB00828B1472B170DB70,
	frame_deleter__ctor_m6B7222FF0DD26BE60F353A584D3F4D33D1674678,
	frame_deleter_Invoke_m7561652636F0D1E3B70DA57691624454C26959D4,
	frame_deleter_BeginInvoke_m06BEB228DEE381AE4A75504B21870FE574D1B7C7,
	frame_deleter_EndInvoke_m34008B2EFC547F6ED9BEA39543EB1E9B7B121114,
	rs2_devices_changed_callback__ctor_m365B2C1EFB242BD1727B6F4377D02C3B7A6E0A3B,
	rs2_devices_changed_callback_Invoke_m18FCB0AF9FFBB40D57B741FE2EF95DF4EFFBC22B,
	rs2_devices_changed_callback_BeginInvoke_m42049D26441860036AE2375D59BAB597B224345E,
	rs2_devices_changed_callback_EndInvoke_m2D671B7DD473C926CD3F1958608A7B04ED95B6E6,
	ProgressCallback__ctor_mCA3D5749CAA2B251ED14FEDE5F15A2F83DF6A886,
	ProgressCallback_Invoke_mA6BDC658A31082A6F0E081773334715724CC5DDC,
	ProgressCallback_BeginInvoke_m15119AD578F45928127A1A28693ACCA2ACB9A9A6,
	ProgressCallback_EndInvoke_m4C61DD14901A56A1F2885CDCAC6085FAD6F481C4,
	rs2_update_progress_callback__ctor_m4177FBDF045840F22F20E45C625385B7EC0AC18B,
	rs2_update_progress_callback_Invoke_mEB4F43AA000AF5C68C61D1C8408A54E0333188A9,
	rs2_update_progress_callback_BeginInvoke_m958DEDFB7260C8E2857A6F533624960F6F7CE87A,
	rs2_update_progress_callback_EndInvoke_m50FB7051B8857E05F5F00A8A7F71473B6519F693,
	Intrinsics_ToString_m1EC19569E3A28C1E87695007C535124C2612454F,
	Intrinsics_get_FOV_mCD5633FD7EA2692854593F3D726F4F523DA417DB,
	SoftwareVideoFrame__ctor_mE348DBD924376C236983F6F3348DCE679BD9E56B,
	U3CU3Ec__cctor_m5ADF3757F50CDE390116A181A58DEAD7B93B8EC0,
	U3CU3Ec__ctor_m03BA5A377312A9051CBFDFC2CB505C4258B5846A,
	U3CU3Ec_U3C_ctorU3Eb__8_0_m3EA1C499678CE1BBFB113F9CC2AF179C4CB81CC6,
	SoftwarePoseFrame__ctor_m46B4AA59F8BA69418C35215F3BDE870D72494A6C,
	PoseFrameInfo__ctor_mBBEE6585B1060658A9E5EFCDDE2967E7BA780021,
	U3CU3Ec__cctor_m2EA13324360A821BE7390B9E0506E33747F5F01F,
	U3CU3Ec__ctor_mD3658EE5C04AABC796710ED15251916DDC7E220E,
	U3CU3Ec_U3C_ctorU3Eb__8_0_mA68D18E0A12FB12E4B57EC6C024E35816DFD958C,
	SoftwareMotionFrame__ctor_m5B700BF4766D849BAE2994093C28D7305E906D77,
	U3CU3Ec__cctor_mD08FF332CD56C1077534259B57097C6370035A8E,
	U3CU3Ec__ctor_m501B7F74797A73F8693BD06FBCE19D668353FC87,
	U3CU3Ec_U3C_ctorU3Eb__6_0_mF6660287FEA3850596CF18B1E938B83BBE8CE580,
	Pose__ctor_m1443039F19C19D730623BF387027CFB52D03D829,
	InfoCollection_get_Count_m6529120B6D1CFE243DEE995706ED95164F5E0899,
	InfoCollection__ctor_m2862CD4104A5477E5A9D94AB51C94F58978923E0,
	InfoCollection_GetInfo_m018400A298BA4BFB6266691E028579BA09412D6F,
	InfoCollection_Supports_m3C5D898A1C74C0ECF06A4DDC2A310A80799214B1,
	InfoCollection_get_Item_m4B597199E8D463605288739DC5CF4D93B8C98D71,
	InfoCollection_GetEnumerator_m83AE5D867C8A6CA373AE7A36C7BD30C20B8CD161,
	InfoCollection_System_Collections_IEnumerable_GetEnumerator_m54523B48BD924F8E373DDF04C9CD76C05677CE43,
	InfoCollection__cctor_m08D80008B6B72CC0670D648585ADC7FDA3FF2A3F,
	InfoCollectionDebugView_get_Items_m9138BDD53B0FCEF6EF342E9913F74C892DBA3D33,
	InfoCollectionDebugView__ctor_m2746D22D27B4840950A2AD5DFEBB78CE1D514AB2,
	GetInfoDelegate__ctor_m856290BEF7E827FFD7467F3E306EA49BCF754F2B,
	GetInfoDelegate_Invoke_m1D4DE6A5220A9015C8C024A6073A6B97D42E24EC,
	GetInfoDelegate_BeginInvoke_m735A28944864D5551E6ACBE7294A7BFF07EA8281,
	GetInfoDelegate_EndInvoke_m5957DE72C994D8F44132F9BB6E17199E24BD958D,
	SupportsDelegate__ctor_m5CE97BE47446D4E5A8D002D80F5B4E9C0F78E8C0,
	SupportsDelegate_Invoke_mC92658F95B0BC5818216A38776E158B54632AF3B,
	SupportsDelegate_BeginInvoke_m2926AB3763CEF8A0105629AF7279F89E1BB69821,
	SupportsDelegate_EndInvoke_m5935A74574791D9F743ECF6AF7345387B151BF95,
	U3CGetEnumeratorU3Ed__14__ctor_mF0A124B44054BB8EFA9B9F510B34876C9F280B8D,
	U3CGetEnumeratorU3Ed__14_System_IDisposable_Dispose_mE679D458BA134456E8AB5DA0D38891F968D6A13C,
	U3CGetEnumeratorU3Ed__14_MoveNext_m8D5A6EABCB8C77EF21B499B166CE5CC6D338B450,
	U3CGetEnumeratorU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CIntel_RealSense_CameraInfoU2CSystem_StringU3EU3E_get_Current_mF743FD979535545A8523F9055F9EB4F6B60783A1,
	U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_Reset_m8A7F6B1A8E72AFE1E153298A60678E207B3F0646,
	U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_get_Current_m46DFAF5ACD6893BDDC194D6E11B9D96A8A0357AF,
	FwLog__ctor_m3E224F95A9241D5D1B19CE1407A8E7DA9BA4657D,
	FwLog_Create_m98EF7BFAD034F94A6FB3160321BF863B1953EAE6,
	FwLog_GetData_m0433172D8357A77EDB6F47569AF5D5D0019B0DEA,
	FwLog_GetSize_mF0FD8CE6C008ED3107471AC36275EC76E15DAAA8,
	FwLog_GetTimestamp_m2469348154BF011A9BE54DD8F90ECE1DCD86BC1E,
	FwLog_GetSeverity_m241A61910969C34BD76E5746EE694C9CA906C3D4,
	FwParsedLog__ctor_m1D6AC49AE14AC96488ACD1651AFFAF7D63A78D9A,
	FwParsedLog_Create_mD7335934A97D9F146E01E61C26C0F4FF5849777B,
	FwParsedLog_GetMessage_m07DBB1158704C5015DFCC7E24C8080D0634EB2A7,
	FwParsedLog_GetFileName_m75FE3FEC01B6B7016CB64158ED40A0689503DC8F,
	FwParsedLog_GetThreadName_m2FD3E85DB844BB98F03D88D2433DF618A61710DC,
	FwParsedLog_GetSeverity_m15CE52DD3813B3B88F9315B1DC4F127B0C99F073,
	FwParsedLog_GetLine_m30B4917004F9835D28B0D62223ABAB4EDFA0BB18,
	FwParsedLog_GetTimestamp_m0BACF4BBD4D60F239076A7CABD9E7A8081715D31,
	FwParsedLog_GetSequenceId_mEB23771664A22CE394F981F7BBBD0FE24C1EE23E,
	TerminalParser__ctor_m9DAF9C1291BD3101462E601275A1464689B3A6DB,
	TerminalParser_Create_mA1E2EB7A39C439B53200D530B97518F4C9B3A14F,
	TerminalParser_ParseCommand_m65E43713C7323382DA906D1EF2CB3D472F375E1C,
	TerminalParser_ParseResponse_mE4D355349E3937728DDB1D497E1D45DFC553438F,
	ErrorMarshaler_GetInstance_mF32107DB4103B428050B388DA326BF6BD7157A5C,
	ErrorMarshaler_CleanUpManagedData_mC7CB3712CA81F9E5EFD23702FE15AA5C7D7C3E20,
	ErrorMarshaler_CleanUpNativeData_m396E99B68592F5A7F082D39BDA51762E6AFBD14D,
	ErrorMarshaler_GetNativeDataSize_mC8D48CA4726912A8A21206FAD539763B73425F11,
	ErrorMarshaler_MarshalManagedToNative_mBC4FD4DDA2D68F54E4879FCC1D12F3DA5FC5D3D3,
	ErrorMarshaler_MarshalNativeToManaged_m5F0249135E448E34537B2858041C8C9F7FCD2196,
	ErrorMarshaler__ctor_m3813EA5C7E717E2FF3A221CC56496EA50C628CC3,
	ObjectPool_GetPool_m1FB065644C4F842455ECE14E0AFF1B7874532F8E,
	ObjectPool_CreateInstance_mF43AFE7C86B1E745B232955BBBC4ED798C7FC649,
	ObjectPool_Get_mEF8CF0EA66093865B90A5CD2924861AE96DEE5D0,
	NULL,
	NULL,
	ObjectPool__cctor_m81050091036050683D1E6D579B78796B38724AAC,
	TypeComparer_Equals_mDE77B516A1C6A911A492C8705176CC4850B71263,
	TypeComparer_GetHashCode_mEEA4F98A4E7467BFB07DD525B1774051C00D2DAF,
	TypeComparer__ctor_mA08306E3D74D5BE8A41E9183CA280A28A297C223,
	TypeComparer__cctor_m55784236A0D7E0E011504D482F479E73C0FEE9D4,
	Log_ToConsole_m5CE7F767B08FBE087E0D9A7AA599557E2B87CEB3,
	Log_ToFile_m06C0B70261ADD546BFF25A307CB88708A80408B4,
	Log_LogMessage_mD1E1B6256E22A409592CCDC5877D14CB0AC80D27,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	OptionsList_get_Count_mC206026C322760D9C08CB7342F5810F8E8869824,
	OptionsList_get_SyncRoot_m925EDA0386DC4C0A07CBD6246DA09BCBD69A0F38,
	OptionsList_get_IsSynchronized_mB491913DB8E7D4756AB496AADFA70877E0BCFA6A,
	OptionsList_Create_m256F9BA0D108A49AC5DCF1B1371DD1DDFB33B753,
	OptionsList__ctor_m13F0A742D7E01D280C56C1CF6C25B07E4AA07F47,
	OptionsList_get_Item_mA7F5C432AD276A572B10EE1D1D5BED4FE3D7893F,
	OptionsList_Supports_mC341A149D1146AA0BC6B18BA6C78C1D65EFAEF74,
	OptionsList_OptionValueDescription_m52D2494A442429CCB02C9FA271147664D7C573F0,
	OptionsList_GetEnumerator_m8E22C4434DF2ED8B39AD467547E716F9F50FAE77,
	OptionsList_System_Collections_IEnumerable_GetEnumerator_mD411AFAFF93E4E14765567AEA7BF9B4235B5F84E,
	OptionsList_CopyTo_mC2C08118B26A45BDD31A8F31270A25A3298B9112,
	OptionsListDebugView_get_Items_mFA775D80AA311365749E60D271F6A1DF3D8A74B7,
	OptionsListDebugView__ctor_m3E62B61EC361D62553E937C8A348172112E0780F,
	U3CGetEnumeratorU3Ed__14__ctor_m22A827DAF7C4DC41545BA18862F39BA70FBAE68E,
	U3CGetEnumeratorU3Ed__14_System_IDisposable_Dispose_mE7FEB0486BBCBFFDA06A6B0CE03DDBD6EBA49BC3,
	U3CGetEnumeratorU3Ed__14_MoveNext_m08E5D45198916DCF0F46DD97CC2F2F222ED3BA5C,
	U3CGetEnumeratorU3Ed__14_System_Collections_Generic_IEnumeratorU3CIntel_RealSense_IOptionU3E_get_Current_m43B786BD219FC4EA8CFAFCC8E9D1B3B1BE8071FD,
	U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_Reset_m431915313DC202404742CD1B7A14E2B159124D6F,
	U3CGetEnumeratorU3Ed__14_System_Collections_IEnumerator_get_Current_m434103F141A42096830BC2486DDEF98732B64AB2,
	OptionInternal__ctor_m0E08310B0247757B9BBDB07BEC1D0FB1277AA7A9,
	OptionInternal_get_Description_m2AE4AC80AB8B24B384BA957BFBFF13081AB41D68,
	OptionInternal_get_Value_m071FB97659CD8FA38B08FA4FCDEF7107E43D0EAC,
	OptionInternal_set_Value_m55146946396657E09A4ED1CDF10940C99FF27599,
	OptionInternal_GetValueDescription_m309395029D6FDF192E34A69ABFEEE46DB757DB1E,
	OptionInternal_get_Key_m5C88F38792F6FF8CA053935268071DBE184A75AA,
	OptionInternal_get_Min_m8F000E071C2782E45585D268E0DB96132DAEBEB3,
	OptionInternal_get_Max_mD169BA520876157EB25BD39F0CE9F6D8516C8890,
	OptionInternal_get_Step_mAD7B167B84AA43003E4ECBC07AC80D76C7DF0C8D,
	OptionInternal_get_Default_m770ADBC74AEBAF7961FEFADD2F06DD9D5963963D,
	OptionInternal_get_ValueDescription_m7873A85314048DEFEA1C1779AEFD4A97FDE05EE2,
	OptionInternal_get_ReadOnly_m536A3B94D3028598A959654118A2A57016EAF08E,
	Deleter__ctor_mABCF8707A24D88DBE18C71276BE7FC9D119689E0,
	Deleter_Invoke_mA8A03EB1902848639734C12700F4D7A3863461F9,
	Deleter_BeginInvoke_m32FABC2737A1266A870A231071697F3DC9C22ED8,
	Deleter_EndInvoke_m6BE3A185CCC34048A4FBCFCD0F169104275D665B,
	DeleterHandle_get_Handle_mEFA023D4C0FCEDD5DA1FFC2C169E0AEE09296DE5,
	DeleterHandle_get_IsInvalid_m5C9C1AC778079EFCEFCCCEEB1960D0DA6578D7AA,
	DeleterHandle__ctor_mB4FDBAF55535905DB8B44DC1DB62A2F7B59B6AC9,
	DeleterHandle_SetHandleAsInvalid_mEA1B0CBC00948AEEA9480443109FE94CC2BA96DF,
	DeleterHandle_Dispose_mD4F4C5C3E5A65AABBCBBE7A5822CEBA139EA083D,
	DeleterHandle_Dispose_mD3A0D35A7E37D2E56FD8761EE23983C377BC9D3C,
	DeleterHandle_Reset_mE2ECBF662DA2146EFC3092268537B77DCD6C662D,
	DeleterHandle_Reset_m3B27FA65845C9E31E18329B210307AA86F84D857,
	DeleterHandle_Finalize_mEE60A5C1911696117EB9994859C2E89E42CFDE8C,
	Object__ctor_m6DF77A0CE068F1F3C037D14E2030DA468540E6E5,
	Object_get_Handle_m96B34CD2853888B951499B2A690361475521027B,
	Object_Dispose_mF9CEF11582FACFF8209F0A1E82D4020309608293,
	Object_Dispose_m8EBCE4AF365CE2393E4B76B0764E8ECDD58852CF,
	Object_Reset_m7B418F064874B5B375C31A08F4FFCEDF379F27B3,
	PooledObject__ctor_mE8AD5B256DAC557698B67C3E1C6061B8B1FB6E8E,
	NULL,
	PooledObject_Dispose_m0250FF8608B96A963C6CF3C0ABD2973ACB839EE5,
	RefCountedPooledObject__ctor_m937F87C5F16602B33F222C90E9F1B4582E6F3EA9,
	RefCountedPooledObject_Retain_m16DB04E55B7F2F0CC28645F7942AEBF9452399BE,
	RefCountedPooledObject_Dispose_mD4826D5E95AC491FC8BBAB42509CCA4380F2CA67,
	RefCountedPooledObject_Release_m2912A7DEC6C283D2BCA3896A3792B86D48843A74,
	RefCountedPooledObject_Initialize_m63CC31435A1F2C655080E84ABF5D80111D9E9DBE,
	RefCount__ctor_mC2688B4E2EB0E183DD7B62EDEE4984A1CB7D598D,
};
extern void FrameSource__ctor_mA8668D31C394FA6FCA1A41475AC15A3E0215FEB5_AdjustorThunk (void);
extern void FrameSource_AllocateCompositeFrame_mFDB68FA935AE9FE7B306A8EE6D5EDBF5706CC89D_AdjustorThunk (void);
extern void FrameSource_AllocateCompositeFrame_m9D3D367D2CC39F835EE6D42CC87671BDF22F62E7_AdjustorThunk (void);
extern void FrameSource_AllocateCompositeFrame_m9E5D289E12132C8ACBB9E815F2DDE8B347F8F045_AdjustorThunk (void);
extern void FrameSource_FrameReady_m00EABCFDF9B7EB76D5462FCFBCA4C4905B079932_AdjustorThunk (void);
extern void Intrinsics_ToString_m1EC19569E3A28C1E87695007C535124C2612454F_AdjustorThunk (void);
extern void Intrinsics_get_FOV_mCD5633FD7EA2692854593F3D726F4F523DA417DB_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[7] = 
{
	{ 0x0600027D, FrameSource__ctor_mA8668D31C394FA6FCA1A41475AC15A3E0215FEB5_AdjustorThunk },
	{ 0x06000280, FrameSource_AllocateCompositeFrame_mFDB68FA935AE9FE7B306A8EE6D5EDBF5706CC89D_AdjustorThunk },
	{ 0x06000281, FrameSource_AllocateCompositeFrame_m9D3D367D2CC39F835EE6D42CC87671BDF22F62E7_AdjustorThunk },
	{ 0x06000282, FrameSource_AllocateCompositeFrame_m9E5D289E12132C8ACBB9E815F2DDE8B347F8F045_AdjustorThunk },
	{ 0x06000283, FrameSource_FrameReady_m00EABCFDF9B7EB76D5462FCFBCA4C4905B079932_AdjustorThunk },
	{ 0x06000355, Intrinsics_ToString_m1EC19569E3A28C1E87695007C535124C2612454F_AdjustorThunk },
	{ 0x06000356, Intrinsics_get_FOV_mCD5633FD7EA2692854593F3D726F4F523DA417DB_AdjustorThunk },
};
static const int32_t s_InvokerIndices[1005] = 
{
	5933,
	5711,
	8937,
	5933,
	5811,
	5811,
	4798,
	4798,
	4798,
	4798,
	4232,
	5811,
	4246,
	4798,
	1581,
	5933,
	2784,
	2787,
	980,
	4798,
	7313,
	7313,
	7315,
	8146,
	8146,
	7911,
	7915,
	7911,
	8062,
	7549,
	8062,
	8146,
	8146,
	7543,
	7877,
	7550,
	7877,
	7557,
	8146,
	8476,
	8476,
	8476,
	7323,
	7029,
	6166,
	7310,
	7256,
	7550,
	7550,
	8743,
	7910,
	8743,
	7320,
	6755,
	7255,
	8149,
	7877,
	7910,
	8476,
	8476,
	8476,
	7909,
	8476,
	8476,
	8476,
	8476,
	8476,
	8476,
	7256,
	7412,
	7021,
	7911,
	7877,
	7256,
	8743,
	7256,
	6191,
	7310,
	6879,
	7297,
	7256,
	7877,
	7833,
	7911,
	8062,
	7877,
	7911,
	7877,
	7877,
	7877,
	7877,
	8146,
	8743,
	8743,
	7911,
	7911,
	7877,
	7029,
	7911,
	7256,
	6086,
	6491,
	6882,
	6880,
	7310,
	7877,
	7550,
	7555,
	8743,
	7877,
	8743,
	7310,
	7911,
	7310,
	7256,
	7256,
	8017,
	6305,
	6303,
	7550,
	7027,
	8146,
	7029,
	7550,
	8146,
	7029,
	7911,
	7833,
	7877,
	7877,
	7911,
	7911,
	7911,
	7310,
	7310,
	6190,
	6582,
	6490,
	6120,
	8743,
	7256,
	7256,
	7018,
	7877,
	7877,
	8743,
	7877,
	8743,
	7023,
	7024,
	7541,
	7911,
	6754,
	6389,
	6387,
	7262,
	6754,
	6385,
	7541,
	8017,
	7877,
	8743,
	7258,
	7310,
	8743,
	7310,
	7256,
	8146,
	6881,
	6088,
	7256,
	7911,
	8146,
	7877,
	6306,
	6883,
	7942,
	8745,
	7326,
	7583,
	7911,
	7322,
	7911,
	8743,
	7312,
	7258,
	7057,
	7577,
	7877,
	8743,
	7911,
	8440,
	8135,
	7537,
	7537,
	6944,
	8017,
	8017,
	8395,
	7543,
	7541,
	7550,
	7025,
	7550,
	7025,
	7550,
	7025,
	7550,
	7025,
	7550,
	7025,
	7550,
	7025,
	7550,
	7025,
	7550,
	7025,
	7550,
	7025,
	7550,
	7025,
	7550,
	7025,
	7550,
	7025,
	7550,
	7025,
	7030,
	7911,
	8146,
	8146,
	6121,
	6122,
	6078,
	6087,
	6186,
	6129,
	7911,
	7025,
	6488,
	6489,
	8476,
	7315,
	7555,
	7555,
	7555,
	7022,
	7543,
	7319,
	7317,
	7318,
	7021,
	7021,
	7911,
	8743,
	8053,
	7258,
	7258,
	7911,
	7877,
	8053,
	7877,
	7262,
	7911,
	8743,
	6753,
	7911,
	7911,
	7911,
	7877,
	8053,
	8053,
	8053,
	7915,
	8743,
	6885,
	6254,
	7915,
	8146,
	7320,
	6748,
	7255,
	8743,
	7911,
	7312,
	6883,
	6492,
	7911,
	7911,
	7911,
	8743,
	8476,
	8743,
	6136,
	8146,
	7555,
	7555,
	7027,
	7555,
	7543,
	7019,
	8146,
	7312,
	7258,
	7307,
	8481,
	8481,
	8481,
	8452,
	8481,
	8937,
	2784,
	1382,
	521,
	4183,
	8899,
	4775,
	8557,
	5711,
	4699,
	5811,
	4798,
	4775,
	8557,
	5811,
	4798,
	4775,
	8557,
	1408,
	955,
	1428,
	991,
	165,
	94,
	281,
	163,
	560,
	309,
	5811,
	4798,
	4242,
	5933,
	2830,
	5933,
	2830,
	5933,
	2830,
	5933,
	2830,
	5933,
	2830,
	4775,
	8557,
	5933,
	5933,
	4775,
	8557,
	294,
	4246,
	5933,
	4699,
	4775,
	2752,
	0,
	0,
	5811,
	4798,
	5811,
	5811,
	5933,
	3429,
	0,
	8937,
	4775,
	5811,
	5811,
	5781,
	4240,
	3457,
	8937,
	5811,
	4798,
	4773,
	5933,
	5711,
	5811,
	5933,
	5811,
	4775,
	8557,
	5811,
	4798,
	5933,
	5933,
	5933,
	5781,
	5915,
	5915,
	4889,
	4774,
	5711,
	4699,
	4842,
	4775,
	7918,
	2787,
	8557,
	5933,
	5933,
	5811,
	8893,
	5933,
	4246,
	4798,
	4773,
	4183,
	4775,
	8557,
	5933,
	5811,
	4798,
	4798,
	2830,
	5711,
	2784,
	4842,
	1429,
	4798,
	4775,
	8557,
	4798,
	4798,
	4798,
	2830,
	2784,
	4842,
	1429,
	4798,
	4775,
	8557,
	5811,
	5811,
	5914,
	3350,
	3350,
	3457,
	1798,
	4775,
	4775,
	2254,
	5858,
	5933,
	4775,
	8555,
	0,
	0,
	3429,
	0,
	0,
	5811,
	5933,
	5711,
	5781,
	5783,
	0,
	5811,
	5915,
	5730,
	5811,
	5781,
	4178,
	4178,
	3429,
	8937,
	4773,
	5781,
	4773,
	0,
	4260,
	0,
	0,
	4260,
	4798,
	5781,
	8479,
	8557,
	7965,
	5933,
	4775,
	5711,
	5811,
	4798,
	0,
	2213,
	0,
	0,
	2213,
	5811,
	5811,
	5811,
	5811,
	5811,
	5811,
	5811,
	5781,
	4240,
	2213,
	1397,
	8555,
	4699,
	4798,
	4798,
	5811,
	5811,
	5933,
	5711,
	5933,
	5933,
	3457,
	5933,
	3457,
	8937,
	5933,
	4798,
	8557,
	0,
	4798,
	4699,
	5933,
	5933,
	5933,
	8937,
	5933,
	4798,
	4775,
	5933,
	5781,
	4773,
	5783,
	0,
	0,
	5783,
	0,
	2787,
	4775,
	5781,
	5781,
	5781,
	5781,
	0,
	4775,
	0,
	4775,
	4775,
	5858,
	4775,
	5921,
	4798,
	0,
	0,
	4775,
	5811,
	0,
	0,
	8893,
	5933,
	2547,
	322,
	581,
	1555,
	1077,
	5933,
	4798,
	4798,
	2769,
	4798,
	2547,
	5933,
	3457,
	4246,
	8482,
	8893,
	4798,
	5933,
	5811,
	4246,
	4246,
	2230,
	5933,
	4260,
	1736,
	3350,
	5811,
	5933,
	2751,
	5933,
	2751,
	4775,
	5811,
	5811,
	2213,
	0,
	8479,
	4773,
	2230,
	8893,
	4775,
	5933,
	2230,
	4798,
	5933,
	7552,
	5811,
	4798,
	5811,
	0,
	4798,
	5933,
	4798,
	372,
	8149,
	4699,
	5933,
	8937,
	2784,
	2777,
	961,
	4798,
	8893,
	4775,
	5933,
	2230,
	8477,
	4775,
	4699,
	2230,
	4749,
	0,
	0,
	2230,
	4246,
	4246,
	4798,
	8893,
	4775,
	5933,
	2230,
	8893,
	4775,
	5933,
	2230,
	4798,
	0,
	5811,
	4798,
	5811,
	4798,
	5811,
	4775,
	4246,
	0,
	4699,
	3429,
	0,
	7965,
	8893,
	4775,
	5933,
	2230,
	8893,
	4775,
	5933,
	4798,
	4260,
	3350,
	8893,
	4775,
	5933,
	2230,
	8893,
	4775,
	5933,
	2230,
	4775,
	5811,
	5811,
	5781,
	5811,
	5711,
	0,
	2782,
	4240,
	4773,
	5933,
	5711,
	5811,
	5933,
	5811,
	8893,
	4775,
	5933,
	2230,
	8893,
	4775,
	5933,
	2230,
	5933,
	4775,
	4699,
	5781,
	5781,
	5781,
	5781,
	5781,
	5711,
	4699,
	5711,
	3726,
	2776,
	1397,
	3429,
	0,
	0,
	0,
	8555,
	8937,
	4775,
	5811,
	5811,
	5781,
	5811,
	5711,
	4240,
	0,
	2782,
	4773,
	5933,
	5711,
	5811,
	5933,
	5811,
	5933,
	4775,
	5788,
	255,
	5781,
	5781,
	4775,
	5807,
	4775,
	5933,
	0,
	0,
	4775,
	4699,
	5811,
	4798,
	5811,
	4798,
	4798,
	4798,
	4798,
	4798,
	5933,
	5933,
	3429,
	0,
	5858,
	5811,
	5811,
	5811,
	8937,
	4775,
	4240,
	5811,
	5811,
	8937,
	4773,
	5933,
	5711,
	5534,
	5933,
	5811,
	5933,
	2751,
	4775,
	5811,
	5811,
	2782,
	5781,
	5811,
	5711,
	4240,
	4773,
	5933,
	5711,
	5811,
	5933,
	5811,
	4775,
	4798,
	0,
	4798,
	4798,
	4252,
	4250,
	4251,
	2548,
	2597,
	2597,
	0,
	0,
	0,
	4775,
	8557,
	5811,
	3457,
	1276,
	1254,
	4775,
	5858,
	5828,
	4815,
	5933,
	2784,
	4798,
	1420,
	4798,
	2784,
	2751,
	952,
	4798,
	2784,
	1581,
	522,
	4798,
	2784,
	4775,
	1407,
	4798,
	2784,
	1581,
	522,
	4798,
	2784,
	4775,
	1407,
	4798,
	2784,
	2830,
	990,
	4798,
	5811,
	5811,
	5933,
	8937,
	5933,
	4775,
	5933,
	5933,
	8937,
	5933,
	4775,
	5933,
	8937,
	5933,
	4775,
	5933,
	5781,
	1627,
	4240,
	3429,
	4240,
	5811,
	5811,
	8937,
	5811,
	4798,
	2784,
	1380,
	519,
	2190,
	2784,
	1340,
	519,
	1985,
	4773,
	5933,
	5711,
	5534,
	5933,
	5811,
	4775,
	8555,
	5811,
	5781,
	5914,
	5781,
	4775,
	8555,
	5811,
	5811,
	5811,
	5781,
	5914,
	5914,
	5914,
	4798,
	8482,
	4246,
	2230,
	8557,
	4798,
	4775,
	5781,
	4183,
	4242,
	5933,
	8557,
	7962,
	7962,
	0,
	0,
	8937,
	1805,
	4005,
	5933,
	8937,
	8741,
	8139,
	8139,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	5781,
	5811,
	5711,
	8481,
	4775,
	4240,
	3429,
	2215,
	5811,
	5811,
	2782,
	5811,
	4798,
	4773,
	5933,
	5711,
	5811,
	5933,
	5811,
	2750,
	5811,
	5858,
	4842,
	4249,
	5781,
	5858,
	5858,
	5858,
	5858,
	5811,
	5711,
	2784,
	4775,
	1407,
	4798,
	5783,
	5711,
	2752,
	5933,
	5933,
	4699,
	4775,
	2752,
	5933,
	2752,
	5783,
	5933,
	4699,
	2752,
	2752,
	0,
	4699,
	2752,
	5933,
	4699,
	3370,
	5933,
	5933,
};
static const Il2CppTokenRangePair s_rgctxIndices[40] = 
{
	{ 0x02000055, { 46, 3 } },
	{ 0x0600016C, { 0, 1 } },
	{ 0x0600016D, { 1, 2 } },
	{ 0x06000174, { 3, 1 } },
	{ 0x060001C7, { 4, 1 } },
	{ 0x060001C8, { 5, 1 } },
	{ 0x060001CA, { 6, 1 } },
	{ 0x060001CB, { 7, 1 } },
	{ 0x060001D1, { 8, 1 } },
	{ 0x060001DE, { 9, 1 } },
	{ 0x060001E0, { 10, 1 } },
	{ 0x060001E1, { 11, 1 } },
	{ 0x060001ED, { 12, 1 } },
	{ 0x060001EF, { 13, 4 } },
	{ 0x060001F0, { 17, 2 } },
	{ 0x0600020E, { 19, 1 } },
	{ 0x0600021D, { 20, 1 } },
	{ 0x0600021F, { 21, 1 } },
	{ 0x0600022F, { 22, 2 } },
	{ 0x06000230, { 24, 1 } },
	{ 0x06000233, { 25, 2 } },
	{ 0x06000234, { 27, 1 } },
	{ 0x0600025A, { 28, 2 } },
	{ 0x06000268, { 30, 1 } },
	{ 0x0600027E, { 31, 1 } },
	{ 0x0600027F, { 32, 1 } },
	{ 0x06000295, { 33, 1 } },
	{ 0x06000298, { 34, 2 } },
	{ 0x060002B2, { 36, 1 } },
	{ 0x060002D2, { 37, 1 } },
	{ 0x060002D3, { 38, 1 } },
	{ 0x060002D4, { 39, 1 } },
	{ 0x060002DE, { 40, 1 } },
	{ 0x060002F0, { 41, 1 } },
	{ 0x060002F1, { 42, 1 } },
	{ 0x060002FF, { 43, 1 } },
	{ 0x06000322, { 44, 2 } },
	{ 0x0600039A, { 49, 2 } },
	{ 0x0600039B, { 51, 1 } },
	{ 0x060003A5, { 52, 1 } },
};
extern const uint32_t g_rgctx_ObjectPool_Get_TisT_tE5FDAB672CD065671FE7BBE0F5CCB8906C18F640_mAE04EC29AF1D8245EC9FF90FD2057E45FFC1D653;
extern const uint32_t g_rgctx_ObjectPool_Get_TisT_t5DAB500F0C1BD0DF5D5CF801F223E773CC7F5FAB_mDEDEF80FEFA3BAD0699D1EB8D04F1ED23D86D5B3;
extern const uint32_t g_rgctx_T_t5DAB500F0C1BD0DF5D5CF801F223E773CC7F5FAB;
extern const uint32_t g_rgctx_Device_Create_TisT_tB4BB826993797453A4AEEF08A097B85293637785_mD7D01BF1917D7BE138D2529AC9C58A8948078833;
extern const uint32_t g_rgctx_ObjectPool_Get_TisT_t24E82C0F82FC1DD2A107471580593943FD8F3492_mC6504D99A208BD4A74B7D09E536A60D3D9E0AF15;
extern const uint32_t g_rgctx_ObjectPool_Get_TisT_t998A458FB8B6072526186F912C603D3F8E500162_m9044339308E74448CF782364BEA88C9FAC43FF42;
extern const uint32_t g_rgctx_Frame_Create_TisT_tD52A0F44CEDBD0B4FCFFFA81A9EB912A1A16C904_m4DC1D32A5D68E8B95A7BDE12BB7AFD9A66137BC3;
extern const uint32_t g_rgctx_Frame_Create_TisT_t7B3992C77A4C7D0589E273B9E3E8A36D5926101E_m761B95C1A558175A998F3E56ED6C8D38BF848B7D;
extern const uint32_t g_rgctx_StreamProfile_Create_TisT_t54654F500652A224E3CD3678286E26BBEB8EB785_mCE6D6671E0D6ACCDA52DB53F0044AEA236FD26BA;
extern const uint32_t g_rgctx_Frame_Create_TisT_t2B56510408CA63A8AA74D2FD4BB7DF40B8B0B82D_m65C493B0A68010CCD8BFF2D0F868A93B19B9DF20;
extern const uint32_t g_rgctx_Frame_Create_TisT_t1654C505B1BEADE797CB02D6FCD495BF9E986E62_m329888EB91729C1039A96C3FD33547B856E80740;
extern const uint32_t g_rgctx_Frame_Create_TisT_tFC6E3AA1519D1383E34BCAB97CCF916B90081795_mB5738450912655FA3980912A0F3897130803D074;
extern const uint32_t g_rgctx_Frame_Cast_TisT_t220200C37A536FC21A9CB84CE85AE9B385D8C8B7_mC1795E0C38466E4943ABDCE6C929A23F957C6799;
extern const uint32_t g_rgctx_Frame_Create_TisT_tFB17C7D8F12B3520B415F8CA064B5340D083270C_m705048D14765167002281B41C8DAA313967E808C;
extern const uint32_t g_rgctx_Predicate_1_t8711E3E8C8CC3A3C2496754F5D78679E1796AD1F;
extern const uint32_t g_rgctx_Predicate_1_Invoke_m3043BBA22536A972E2F78F3A577DC30798442786;
extern const uint32_t g_rgctx_T_tFB17C7D8F12B3520B415F8CA064B5340D083270C;
extern const uint32_t g_rgctx_FrameSet_FirstOrDefault_TisT_t829658C0BA1BB999024FC5EEBC09449E8A49E34E_mC4AB9463CF78F4F98A763539E16614354DEF0574;
extern const uint32_t g_rgctx_T_t829658C0BA1BB999024FC5EEBC09449E8A49E34E;
extern const uint32_t g_rgctx_T_t7B3338B363F4851FC9527E73E1281D2DD45ABBB0;
extern const uint32_t g_rgctx_Points_Copy_TisT_tCD93B00144799E46EC92768C11DC8C50DD55E08E_m81CA054668334AA830567492270C1CDDA23C2C36;
extern const uint32_t g_rgctx_Points_Copy_TisT_t4A0860335DCA52F133AE0AD5AF1AD1F92BB7D83C_m4819F56216E49A1E283DB3A893E40E297989C798;
extern const uint32_t g_rgctx_T_t1BBCCAFC5C0E584082AC29D1072E2DD02AAA99C5;
extern const uint32_t g_rgctx_T_t1BBCCAFC5C0E584082AC29D1072E2DD02AAA99C5;
extern const uint32_t g_rgctx_T_t4A047FBED14F98F1EE60F45BC6885C2885C09BF2;
extern const uint32_t g_rgctx_T_tB2F0EAD3A30EB462053B1FFFAB8F37FF6405DC3E;
extern const uint32_t g_rgctx_T_tB2F0EAD3A30EB462053B1FFFAB8F37FF6405DC3E;
extern const uint32_t g_rgctx_T_tDC8B511FE6710260DC08BE29C9C482FD5379B417;
extern const uint32_t g_rgctx_StreamProfile_Create_TisT_t1AB749AC4CFFD20FA5219FEDD458BED451249DA3_m3AD3DF888CAD62BB2FC349D557EB80F79B1F99B3;
extern const uint32_t g_rgctx_T_t1AB749AC4CFFD20FA5219FEDD458BED451249DA3;
extern const uint32_t g_rgctx_T_t584B7485DC5996CAE0F0B3B1D96561F1C55AE7AF;
extern const uint32_t g_rgctx_Frame_Create_TisT_t458CE7AE0B5AC3D3E612D1E0C85FC5C6A8F46F9B_m2EAAC0EE7CEBD96FB35E7BE54EF8AE0C541099FE;
extern const uint32_t g_rgctx_Frame_Create_TisT_t45E71820F912BB300353A64FEEE365DE87547518_m59FD878118DB60DA6A36C94FFF4775B9AB8AE509;
extern const uint32_t g_rgctx_FrameQueue_PollForFrame_TisT_tA99BB79D7ABDF18BA47626EA8E53CF11A9FAEF76_mA7EAE3F90891E1871D60D92F26A6EBB152321B15;
extern const uint32_t g_rgctx_T_t8561197A70D031AA41000D87EAA09B76A8673F2E;
extern const uint32_t g_rgctx_T_t8561197A70D031AA41000D87EAA09B76A8673F2E;
extern const uint32_t g_rgctx_T_t87CD210131951BE640D4D13910DE57C2C7218301;
extern const uint32_t g_rgctx_StreamProfile_Create_TisT_t77CEB2DFDA6A39B59A6797E37A96F7AF199012FC_m45078CD3998BC9B95F5438477764DFDCF6A4F1CC;
extern const uint32_t g_rgctx_StreamProfile_Create_TisT_t52B091743EF529DF87D83A5A4F449207B3EC013D_mBDD3178334AF1121643B1059B7F5DDF50CD708F9;
extern const uint32_t g_rgctx_ObjectPool_Get_TisT_t62E86DEE0123171A5124F0905B4C5ABF0614D8F4_m498CCE66F3D782D4626FBAAE37186E6BD87A6E4F;
extern const uint32_t g_rgctx_StreamProfile_Create_TisT_t8E9F6DE113F56BA5139442F901B2B1D79C686156_mE71D29824905A84B210BF4F58ADBA2B956E02E34;
extern const uint32_t g_rgctx_ObjectPool_Get_TisT_t3819F0927C3520F4B6CE9AD263EF753A2FEDC289_m4EAD7C3CCDD94CD13DA43D9BDBA55DCE63BEE6F3;
extern const uint32_t g_rgctx_ObjectPool_Get_TisT_t2B1C017299374D22DABEF989D60C056CF692C784_m8184A39E468661C8220F5A0FB4683B35369B63CB;
extern const uint32_t g_rgctx_Sensor_Create_TisT_t9FCE98E31741B3F364BB62235ABB0722B4C871A9_m9EABAB9DDB2C330D1D6091E096DA79E941884033;
extern const uint32_t g_rgctx_U3CU3Ec__2_1_t6A193759873B3D3470B209D7B4DD75705EC6D31C;
extern const uint32_t g_rgctx_U3CU3Ec__2_1_U3CAddVideoFrameU3Eb__2_0_m3D5C6AD98DFA87061BBC5757BD8412E63138A484;
extern const uint32_t g_rgctx_U3CU3Ec__2_1_t7DA30531CD2573BCC04185E49A2BA3691CD33F96;
extern const uint32_t g_rgctx_U3CU3Ec__2_1__ctor_m07E511C1AD0707AAFCA45202AD13E84B59D2939C;
extern const uint32_t g_rgctx_U3CU3Ec__2_1_t7DA30531CD2573BCC04185E49A2BA3691CD33F96;
extern const uint32_t g_rgctx_T_tAFE37E8BAC79CF32D729DC5CBFA44B69DA728FF2;
extern const uint32_t g_rgctx_T_tAFE37E8BAC79CF32D729DC5CBFA44B69DA728FF2;
extern const uint32_t g_rgctx_T_t6D248CA7B8FFC746445AB6640CBA16FC64D45569;
extern const uint32_t g_rgctx_T_t5952FE41C33731AD30895F888F1EB2BB9FA0449C;
static const Il2CppRGCTXDefinition s_rgctxValues[53] = 
{
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ObjectPool_Get_TisT_tE5FDAB672CD065671FE7BBE0F5CCB8906C18F640_mAE04EC29AF1D8245EC9FF90FD2057E45FFC1D653 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ObjectPool_Get_TisT_t5DAB500F0C1BD0DF5D5CF801F223E773CC7F5FAB_mDEDEF80FEFA3BAD0699D1EB8D04F1ED23D86D5B3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t5DAB500F0C1BD0DF5D5CF801F223E773CC7F5FAB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Device_Create_TisT_tB4BB826993797453A4AEEF08A097B85293637785_mD7D01BF1917D7BE138D2529AC9C58A8948078833 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ObjectPool_Get_TisT_t24E82C0F82FC1DD2A107471580593943FD8F3492_mC6504D99A208BD4A74B7D09E536A60D3D9E0AF15 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ObjectPool_Get_TisT_t998A458FB8B6072526186F912C603D3F8E500162_m9044339308E74448CF782364BEA88C9FAC43FF42 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Frame_Create_TisT_tD52A0F44CEDBD0B4FCFFFA81A9EB912A1A16C904_m4DC1D32A5D68E8B95A7BDE12BB7AFD9A66137BC3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Frame_Create_TisT_t7B3992C77A4C7D0589E273B9E3E8A36D5926101E_m761B95C1A558175A998F3E56ED6C8D38BF848B7D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_StreamProfile_Create_TisT_t54654F500652A224E3CD3678286E26BBEB8EB785_mCE6D6671E0D6ACCDA52DB53F0044AEA236FD26BA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Frame_Create_TisT_t2B56510408CA63A8AA74D2FD4BB7DF40B8B0B82D_m65C493B0A68010CCD8BFF2D0F868A93B19B9DF20 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Frame_Create_TisT_t1654C505B1BEADE797CB02D6FCD495BF9E986E62_m329888EB91729C1039A96C3FD33547B856E80740 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Frame_Create_TisT_tFC6E3AA1519D1383E34BCAB97CCF916B90081795_mB5738450912655FA3980912A0F3897130803D074 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Frame_Cast_TisT_t220200C37A536FC21A9CB84CE85AE9B385D8C8B7_mC1795E0C38466E4943ABDCE6C929A23F957C6799 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Frame_Create_TisT_tFB17C7D8F12B3520B415F8CA064B5340D083270C_m705048D14765167002281B41C8DAA313967E808C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Predicate_1_t8711E3E8C8CC3A3C2496754F5D78679E1796AD1F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Predicate_1_Invoke_m3043BBA22536A972E2F78F3A577DC30798442786 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tFB17C7D8F12B3520B415F8CA064B5340D083270C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FrameSet_FirstOrDefault_TisT_t829658C0BA1BB999024FC5EEBC09449E8A49E34E_mC4AB9463CF78F4F98A763539E16614354DEF0574 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t829658C0BA1BB999024FC5EEBC09449E8A49E34E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t7B3338B363F4851FC9527E73E1281D2DD45ABBB0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Points_Copy_TisT_tCD93B00144799E46EC92768C11DC8C50DD55E08E_m81CA054668334AA830567492270C1CDDA23C2C36 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Points_Copy_TisT_t4A0860335DCA52F133AE0AD5AF1AD1F92BB7D83C_m4819F56216E49A1E283DB3A893E40E297989C798 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_t1BBCCAFC5C0E584082AC29D1072E2DD02AAA99C5 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t1BBCCAFC5C0E584082AC29D1072E2DD02AAA99C5 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t4A047FBED14F98F1EE60F45BC6885C2885C09BF2 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_tB2F0EAD3A30EB462053B1FFFAB8F37FF6405DC3E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tB2F0EAD3A30EB462053B1FFFAB8F37FF6405DC3E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tDC8B511FE6710260DC08BE29C9C482FD5379B417 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_StreamProfile_Create_TisT_t1AB749AC4CFFD20FA5219FEDD458BED451249DA3_m3AD3DF888CAD62BB2FC349D557EB80F79B1F99B3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t1AB749AC4CFFD20FA5219FEDD458BED451249DA3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t584B7485DC5996CAE0F0B3B1D96561F1C55AE7AF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Frame_Create_TisT_t458CE7AE0B5AC3D3E612D1E0C85FC5C6A8F46F9B_m2EAAC0EE7CEBD96FB35E7BE54EF8AE0C541099FE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Frame_Create_TisT_t45E71820F912BB300353A64FEEE365DE87547518_m59FD878118DB60DA6A36C94FFF4775B9AB8AE509 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_FrameQueue_PollForFrame_TisT_tA99BB79D7ABDF18BA47626EA8E53CF11A9FAEF76_mA7EAE3F90891E1871D60D92F26A6EBB152321B15 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_t8561197A70D031AA41000D87EAA09B76A8673F2E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t8561197A70D031AA41000D87EAA09B76A8673F2E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t87CD210131951BE640D4D13910DE57C2C7218301 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_StreamProfile_Create_TisT_t77CEB2DFDA6A39B59A6797E37A96F7AF199012FC_m45078CD3998BC9B95F5438477764DFDCF6A4F1CC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_StreamProfile_Create_TisT_t52B091743EF529DF87D83A5A4F449207B3EC013D_mBDD3178334AF1121643B1059B7F5DDF50CD708F9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ObjectPool_Get_TisT_t62E86DEE0123171A5124F0905B4C5ABF0614D8F4_m498CCE66F3D782D4626FBAAE37186E6BD87A6E4F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_StreamProfile_Create_TisT_t8E9F6DE113F56BA5139442F901B2B1D79C686156_mE71D29824905A84B210BF4F58ADBA2B956E02E34 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ObjectPool_Get_TisT_t3819F0927C3520F4B6CE9AD263EF753A2FEDC289_m4EAD7C3CCDD94CD13DA43D9BDBA55DCE63BEE6F3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ObjectPool_Get_TisT_t2B1C017299374D22DABEF989D60C056CF692C784_m8184A39E468661C8220F5A0FB4683B35369B63CB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Sensor_Create_TisT_t9FCE98E31741B3F364BB62235ABB0722B4C871A9_m9EABAB9DDB2C330D1D6091E096DA79E941884033 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__2_1_t6A193759873B3D3470B209D7B4DD75705EC6D31C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__2_1_U3CAddVideoFrameU3Eb__2_0_m3D5C6AD98DFA87061BBC5757BD8412E63138A484 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__2_1_t7DA30531CD2573BCC04185E49A2BA3691CD33F96 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__2_1__ctor_m07E511C1AD0707AAFCA45202AD13E84B59D2939C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__2_1_t7DA30531CD2573BCC04185E49A2BA3691CD33F96 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_tAFE37E8BAC79CF32D729DC5CBFA44B69DA728FF2 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tAFE37E8BAC79CF32D729DC5CBFA44B69DA728FF2 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t6D248CA7B8FFC746445AB6640CBA16FC64D45569 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t5952FE41C33731AD30895F888F1EB2BB9FA0449C },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Intel_RealSense_CodeGenModule;
const Il2CppCodeGenModule g_Intel_RealSense_CodeGenModule = 
{
	"Intel.RealSense.dll",
	1005,
	s_methodPointers,
	7,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	40,
	s_rgctxIndices,
	53,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
