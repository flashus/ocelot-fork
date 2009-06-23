/*!
	\file PTXStatement.h
	
	\date Monday January 19, 2009
	
	\author Andrew Kerr
	
	\brief The header file for the PTXStatement class

*/

#ifndef IR_PTXSTATEMENT_H_INCLUDED
#define IR_PTXSTATEMENT_H_INCLUDED

#include <vector>
#include <string>

#include <ocelot/ir/interface/PTXInstruction.h>


namespace ir {

	class PTXStatement {
	public:

		/*!
			PTX directive types
		*/
		enum Directive {
			Instr,			//< indicates the PTXInstruction is an actual instruction
			Const,
			Entry,
			File,
			Func,
			Global,
			Label,
			Local,
			Loc,
			Param,
			Reg,
			Section,
			Shared,
			Sreg,
			Struct,
			Surf,
			Target,
			Tex,
			Union,
			Version,
			StartEntry,		//< synthetic directive to indicate start of entry
			EndEntry,		//< synthetic directive to indicate the end of an entry
			StartParam,		//< synthetic directive to indicate start of a parameter list
			EndParam,		//< synthetic directive to indicate end of a parameter list
			Directive_invalid
		};

		union Data {
			PTXU8 u8;
			PTXU16 u16;
			PTXU32 u32;
			PTXU64 u64;
	
			PTXS8 s8;
			PTXS16 s16;
			PTXS32 s32;
			PTXS64 s64;
	
			PTXF32 f32;
			PTXF64 f64;
	
			PTXB8 b8;
			PTXB16 b16;
			PTXB32 b32;
			PTXB64 b64;
		};
		
		typedef std::vector< unsigned int > ArrayStrideVector;
		typedef std::vector< Data > ArrayVector;

		class StaticArray {
			public:
				ArrayStrideVector stride;
				ArrayVector values;
				PTXInstruction::Vec vec;
			
			public:
				std::string dimensions() const;
				std::string initializer( PTXOperand::DataType ) const;
		};
		
		/*!
			Attributes for statements
		*/
		enum Attribute {
			Visible,
			Extern,
			NoAttribute
		};

	public:
	
		static std::string toString( Attribute );
		static std::string toString( Data, PTXOperand::DataType );
	
	public:

		/*!
			Indicates type of statement
		*/
		Directive directive;

		PTXInstruction instruction;
		
		PTXInstruction::Version version;
	
		PTXOperand::DataType type;
	
		StaticArray array;
	
		std::string name;

		int alignment;

		std::string section_type;

		std::string section_name;

		int major, minor;
		
		unsigned int line;
		unsigned int column;
		
		Attribute attribute;

		std::vector< std::string > targets;

	public:
		PTXStatement();
		~PTXStatement();
		
		unsigned int bytes() const;
		unsigned int initializedBytes() const;
		unsigned int elements() const;
		std::string toString() const;
	};

}

#endif
