package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSocialConnectOauthImplSocialOAuthAuthenticationHandleInfo._

case class ComAdobeCqSocialConnectOauthImplSocialOAuthAuthenticationHandleInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComAdobeCqSocialConnectOauthImplSocialOAuthAuthenticationHandleProperties])

object ComAdobeCqSocialConnectOauthImplSocialOAuthAuthenticationHandleInfo {
  import DateTimeCodecs._

  implicit val ComAdobeCqSocialConnectOauthImplSocialOAuthAuthenticationHandleInfoCodecJson: CodecJson[ComAdobeCqSocialConnectOauthImplSocialOAuthAuthenticationHandleInfo] = CodecJson.derive[ComAdobeCqSocialConnectOauthImplSocialOAuthAuthenticationHandleInfo]
  implicit val ComAdobeCqSocialConnectOauthImplSocialOAuthAuthenticationHandleInfoDecoder: EntityDecoder[ComAdobeCqSocialConnectOauthImplSocialOAuthAuthenticationHandleInfo] = jsonOf[ComAdobeCqSocialConnectOauthImplSocialOAuthAuthenticationHandleInfo]
  implicit val ComAdobeCqSocialConnectOauthImplSocialOAuthAuthenticationHandleInfoEncoder: EntityEncoder[ComAdobeCqSocialConnectOauthImplSocialOAuthAuthenticationHandleInfo] = jsonEncoderOf[ComAdobeCqSocialConnectOauthImplSocialOAuthAuthenticationHandleInfo]
}
