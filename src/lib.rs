use std::ffi::CStr;
use std::os::raw::{c_char, c_float, c_int, c_short};
use widestring::WideCStr;

#[repr(C)]
pub struct Args {
    message: *const c_char,
    first: c_int,
    sec: c_float,
    third: *const c_short,
}

#[repr(C)]
pub struct Returns {
    first: c_int,
    sec: *const c_char,
    third: *const c_short,
}

#[no_mangle]
pub extern "C" fn set_get(args: Args) -> Returns {
    let second = unsafe { CStr::from_ptr(args.message) };
    let third = unsafe { WideCStr::from_ptr_str(args.third.cast()) };
    println!(
        "from C - message: {:?}, first: {:?}, second: {:?}, third: {:?}. done!",
        args.message, args.first, second, third
    );
    Returns {
        first: 1394,
        sec: b"hello msg from Rust!".as_ptr().cast(),
        third: b"wchar string from Rust!"
            .iter()
            .map(|i| *i as i16)
            .collect::<Vec<_>>()
            .as_ptr(),
    }
}
