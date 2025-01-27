//
// OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class OrgApacheSlingScriptingJavaImplJavaScriptEngineFactoryProperties: JSONEncodable {
    public var javaClassdebuginfo: ConfigNodePropertyBoolean?
    public var javaJavaEncoding: ConfigNodePropertyString?
    public var javaCompilerSourceVM: ConfigNodePropertyString?
    public var javaCompilerTargetVM: ConfigNodePropertyString?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["java.classdebuginfo"] = self.javaClassdebuginfo?.encodeToJSON()
        nillableDictionary["java.javaEncoding"] = self.javaJavaEncoding?.encodeToJSON()
        nillableDictionary["java.compilerSourceVM"] = self.javaCompilerSourceVM?.encodeToJSON()
        nillableDictionary["java.compilerTargetVM"] = self.javaCompilerTargetVM?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
