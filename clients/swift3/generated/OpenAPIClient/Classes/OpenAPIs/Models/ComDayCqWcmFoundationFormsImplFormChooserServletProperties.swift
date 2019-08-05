//
// ComDayCqWcmFoundationFormsImplFormChooserServletProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComDayCqWcmFoundationFormsImplFormChooserServletProperties: JSONEncodable {

    public var serviceName: ConfigNodePropertyString?
    public var slingServletResourceTypes: ConfigNodePropertyString?
    public var slingServletSelectors: ConfigNodePropertyString?
    public var slingServletMethods: ConfigNodePropertyArray?
    public var formsFormchooserservletAdvansesearchRequire: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["service.name"] = self.serviceName?.encodeToJSON()
        nillableDictionary["sling.servlet.resourceTypes"] = self.slingServletResourceTypes?.encodeToJSON()
        nillableDictionary["sling.servlet.selectors"] = self.slingServletSelectors?.encodeToJSON()
        nillableDictionary["sling.servlet.methods"] = self.slingServletMethods?.encodeToJSON()
        nillableDictionary["forms.formchooserservlet.advansesearch.require"] = self.formsFormchooserservletAdvansesearchRequire?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
