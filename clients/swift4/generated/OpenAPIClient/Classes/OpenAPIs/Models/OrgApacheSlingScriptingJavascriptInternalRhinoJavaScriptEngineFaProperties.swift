//
// OrgApacheSlingScriptingJavascriptInternalRhinoJavaScriptEngineFaProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct OrgApacheSlingScriptingJavascriptInternalRhinoJavaScriptEngineFaProperties: Codable {

    public var orgApacheSlingScriptingJavascriptRhinoOptLevel: ConfigNodePropertyInteger?

    public init(orgApacheSlingScriptingJavascriptRhinoOptLevel: ConfigNodePropertyInteger?) {
        self.orgApacheSlingScriptingJavascriptRhinoOptLevel = orgApacheSlingScriptingJavascriptRhinoOptLevel
    }

    public enum CodingKeys: String, CodingKey { 
        case orgApacheSlingScriptingJavascriptRhinoOptLevel = "org.apache.sling.scripting.javascript.rhino.optLevel"
    }


}

