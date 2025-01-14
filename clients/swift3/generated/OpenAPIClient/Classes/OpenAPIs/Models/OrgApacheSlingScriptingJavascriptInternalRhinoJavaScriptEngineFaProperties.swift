//
// OrgApacheSlingScriptingJavascriptInternalRhinoJavaScriptEngineFaProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class OrgApacheSlingScriptingJavascriptInternalRhinoJavaScriptEngineFaProperties: JSONEncodable {

    public var orgApacheSlingScriptingJavascriptRhinoOptLevel: ConfigNodePropertyInteger?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["org.apache.sling.scripting.javascript.rhino.optLevel"] = self.orgApacheSlingScriptingJavascriptRhinoOptLevel?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

