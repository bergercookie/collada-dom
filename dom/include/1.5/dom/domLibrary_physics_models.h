#ifndef __dom150Library_physics_models_h__
#define __dom150Library_physics_models_h__

#include <dae/daeDocument.h>
#include <1.5/dom/domTypes.h>
#include <1.5/dom/domElements.h>

#include <1.5/dom/domAsset.h>
#include <1.5/dom/domPhysics_model.h>
#include <1.5/dom/domExtra.h>

class DAE;
namespace ColladaDOM150 {

/**
 * The library_physics_models element declares a module of physics_model elements.
 */
class domLibrary_physics_models : public daeElement
{
public:
	virtual COLLADA_TYPE::TypeEnum getElementType() const { return COLLADA_TYPE::LIBRARY_PHYSICS_MODELS; }
	static daeInt ID() { return 412; }
	virtual daeInt typeID() const { return ID(); }
protected:  // Attributes
/**
 *  The id attribute is a text string containing the unique identifier of
 * this element.  This value must be unique within the instance document.
 * Optional attribute. 
 */
	xsID attrId;
/**
 *  The name attribute is the text string name of this element. Optional attribute.
 */
	xsToken attrName;

protected:  // Elements
/**
 * The library_physics_models element may contain an asset element. @see domAsset
 */
	domAssetRef elemAsset;
/**
 * There must be at least one physics_model element. @see domPhysics_model
 */
	domPhysics_model_Array elemPhysics_model_array;
/**
 * The extra element may appear any number of times. @see domExtra
 */
	domExtra_Array elemExtra_array;

public:	//Accessors and Mutators
	/**
	 * Gets the id attribute.
	 * @return Returns a xsID of the id attribute.
	 */
	xsID getId() const { return attrId; }
	/**
	 * Sets the id attribute.
	 * @param atId The new value for the id attribute.
	 */
	void setId( xsID atId ) { *(daeStringRef*)&attrId = atId;
		if( _document != NULL ) _document->changeElementID( this, attrId );
	}

	/**
	 * Gets the name attribute.
	 * @return Returns a xsToken of the name attribute.
	 */
	xsToken getName() const { return attrName; }
	/**
	 * Sets the name attribute.
	 * @param atName The new value for the name attribute.
	 */
	void setName( xsToken atName ) { *(daeStringRef*)&attrName = atName;}

	/**
	 * Gets the asset element.
	 * @return a daeSmartRef to the asset element.
	 */
	const domAssetRef getAsset() const { return elemAsset; }
	/**
	 * Gets the physics_model element array.
	 * @return Returns a reference to the array of physics_model elements.
	 */
	domPhysics_model_Array &getPhysics_model_array() { return elemPhysics_model_array; }
	/**
	 * Gets the physics_model element array.
	 * @return Returns a constant reference to the array of physics_model elements.
	 */
	const domPhysics_model_Array &getPhysics_model_array() const { return elemPhysics_model_array; }
	/**
	 * Gets the extra element array.
	 * @return Returns a reference to the array of extra elements.
	 */
	domExtra_Array &getExtra_array() { return elemExtra_array; }
	/**
	 * Gets the extra element array.
	 * @return Returns a constant reference to the array of extra elements.
	 */
	const domExtra_Array &getExtra_array() const { return elemExtra_array; }
protected:
	/**
	 * Constructor
	 */
	domLibrary_physics_models(DAE& dae) : daeElement(dae), attrId(), attrName(), elemAsset(), elemPhysics_model_array(), elemExtra_array() {}
	/**
	 * Destructor
	 */
	virtual ~domLibrary_physics_models() {}
	/**
	 * Overloaded assignment operator
	 */
	virtual domLibrary_physics_models &operator=( const domLibrary_physics_models &cpy ) { (void)cpy; return *this; }

public: // STATIC METHODS
	/**
	 * Creates an instance of this class and returns a daeElementRef referencing it.
	 * @return a daeElementRef referencing an instance of this object.
	 */
	static DLLSPEC daeElementRef create(DAE& dae);
	/**
	 * Creates a daeMetaElement object that describes this element in the meta object reflection framework.
	 * If a daeMetaElement already exists it will return that instead of creating a new one. 
	 * @return A daeMetaElement describing this COLLADA element.
	 */
	static DLLSPEC daeMetaElement* registerElement(DAE& dae);
};


} // ColladaDOM150
#endif
