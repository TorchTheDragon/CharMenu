// Generated by Haxe 4.1.5
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#define INCLUDED_flixel_graphics_FlxGraphic

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS2(flixel,graphics,FlxGraphic)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxAtlasFrames)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFrame)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFrameCollectionType)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxFramesCollection)
HX_DECLARE_CLASS3(flixel,graphics,frames,FlxImageFrame)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS2(haxe,ds,EnumValueMap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,Shader)

namespace flixel{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES FlxGraphic_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxGraphic_obj OBJ_;
		FlxGraphic_obj();

	public:
		enum { _hx_ClassId = 0x0b2fcf89 };

		void __construct(::String Key, ::openfl::display::BitmapData Bitmap, ::Dynamic Persist);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.graphics.FlxGraphic")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.graphics.FlxGraphic"); }
		static ::hx::ObjectPtr< FlxGraphic_obj > __new(::String Key, ::openfl::display::BitmapData Bitmap, ::Dynamic Persist);
		static ::hx::ObjectPtr< FlxGraphic_obj > __alloc(::hx::Ctx *_hx_ctx,::String Key, ::openfl::display::BitmapData Bitmap, ::Dynamic Persist);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxGraphic_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxGraphic",76,14,33,a3); }

		static void __boot();
		static bool defaultPersist;
		static  ::flixel::graphics::FlxGraphic fromAssetKey(::String Source,::hx::Null< bool >  Unique,::String Key,::hx::Null< bool >  Cache);
		static ::Dynamic fromAssetKey_dyn();

		static  ::flixel::graphics::FlxGraphic fromClass(::hx::Class Source,::hx::Null< bool >  Unique,::String Key,::hx::Null< bool >  Cache);
		static ::Dynamic fromClass_dyn();

		static  ::flixel::graphics::FlxGraphic fromBitmapData( ::openfl::display::BitmapData Source,::hx::Null< bool >  Unique,::String Key,::hx::Null< bool >  Cache);
		static ::Dynamic fromBitmapData_dyn();

		static  ::flixel::graphics::FlxGraphic fromFrame( ::flixel::graphics::frames::FlxFrame Source,::hx::Null< bool >  Unique,::String Key,::hx::Null< bool >  Cache);
		static ::Dynamic fromFrame_dyn();

		static  ::flixel::graphics::FlxGraphic fromFrames( ::flixel::graphics::frames::FlxFramesCollection Source,::hx::Null< bool >  Unique,::String Key);
		static ::Dynamic fromFrames_dyn();

		static  ::flixel::graphics::FlxGraphic fromGraphic( ::flixel::graphics::FlxGraphic Source,::hx::Null< bool >  Unique,::String Key);
		static ::Dynamic fromGraphic_dyn();

		static  ::flixel::graphics::FlxGraphic fromRectangle(int Width,int Height,int Color,::hx::Null< bool >  Unique,::String Key);
		static ::Dynamic fromRectangle_dyn();

		static  ::openfl::display::BitmapData getBitmap( ::openfl::display::BitmapData Bitmap,::hx::Null< bool >  Unique);
		static ::Dynamic getBitmap_dyn();

		static  ::flixel::graphics::FlxGraphic createGraphic( ::openfl::display::BitmapData Bitmap,::String Key,::hx::Null< bool >  Unique,::hx::Null< bool >  Cache);
		static ::Dynamic createGraphic_dyn();

		::String key;
		 ::openfl::display::BitmapData bitmap;
		int width;
		int height;
		::String assetsKey;
		::hx::Class assetsClass;
		bool persist;
		bool isDumped;
		 ::flixel::graphics::tile::FlxGraphicsShader shader;
		 ::haxe::ds::EnumValueMap frameCollections;
		::Array< ::Dynamic> frameCollectionTypes;
		bool unique;
		 ::flixel::graphics::frames::FlxImageFrame _imageFrame;
		int _useCount;
		bool _destroyOnNoUse;
		void dump();
		::Dynamic dump_dyn();

		void undump();
		::Dynamic undump_dyn();

		void onContext();
		::Dynamic onContext_dyn();

		void onAssetsReload();
		::Dynamic onAssetsReload_dyn();

		void destroy();
		::Dynamic destroy_dyn();

		void addFrameCollection( ::flixel::graphics::frames::FlxFramesCollection collection);
		::Dynamic addFrameCollection_dyn();

		::cpp::VirtualArray getFramesCollections( ::flixel::graphics::frames::FlxFrameCollectionType type);
		::Dynamic getFramesCollections_dyn();

		 ::flixel::graphics::frames::FlxFrame getEmptyFrame( ::flixel::math::FlxBasePoint size);
		::Dynamic getEmptyFrame_dyn();

		 ::openfl::display::BitmapData getBitmapFromSystem();
		::Dynamic getBitmapFromSystem_dyn();

		bool get_isLoaded();
		::Dynamic get_isLoaded_dyn();

		bool get_canBeDumped();
		::Dynamic get_canBeDumped_dyn();

		int get_useCount();
		::Dynamic get_useCount_dyn();

		int set_useCount(int Value);
		::Dynamic set_useCount_dyn();

		bool get_destroyOnNoUse();
		::Dynamic get_destroyOnNoUse_dyn();

		bool set_destroyOnNoUse(bool Value);
		::Dynamic set_destroyOnNoUse_dyn();

		 ::flixel::graphics::frames::FlxImageFrame get_imageFrame();
		::Dynamic get_imageFrame_dyn();

		 ::flixel::graphics::frames::FlxAtlasFrames get_atlasFrames();
		::Dynamic get_atlasFrames_dyn();

		 ::openfl::display::BitmapData set_bitmap( ::openfl::display::BitmapData value);
		::Dynamic set_bitmap_dyn();

};

} // end namespace flixel
} // end namespace graphics

#endif /* INCLUDED_flixel_graphics_FlxGraphic */ 
