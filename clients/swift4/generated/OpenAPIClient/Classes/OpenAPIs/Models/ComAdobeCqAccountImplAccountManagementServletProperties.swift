//
// ComAdobeCqAccountImplAccountManagementServletProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct ComAdobeCqAccountImplAccountManagementServletProperties: Codable {

    public var cqAccountmanagerConfigInformnewaccountMail: ConfigNodePropertyString?
    public var cqAccountmanagerConfigInformnewpwdMail: ConfigNodePropertyString?

    public init(cqAccountmanagerConfigInformnewaccountMail: ConfigNodePropertyString?, cqAccountmanagerConfigInformnewpwdMail: ConfigNodePropertyString?) {
        self.cqAccountmanagerConfigInformnewaccountMail = cqAccountmanagerConfigInformnewaccountMail
        self.cqAccountmanagerConfigInformnewpwdMail = cqAccountmanagerConfigInformnewpwdMail
    }

    public enum CodingKeys: String, CodingKey { 
        case cqAccountmanagerConfigInformnewaccountMail = "cq.accountmanager.config.informnewaccount.mail"
        case cqAccountmanagerConfigInformnewpwdMail = "cq.accountmanager.config.informnewpwd.mail"
    }


}
