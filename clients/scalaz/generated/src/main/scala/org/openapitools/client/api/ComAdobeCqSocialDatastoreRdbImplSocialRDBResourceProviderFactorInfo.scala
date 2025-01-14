package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorInfo._

case class ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorProperties])

object ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorInfo {
  import DateTimeCodecs._

  implicit val ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorInfoCodecJson: CodecJson[ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorInfo] = CodecJson.derive[ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorInfo]
  implicit val ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorInfoDecoder: EntityDecoder[ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorInfo] = jsonOf[ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorInfo]
  implicit val ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorInfoEncoder: EntityEncoder[ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorInfo] = jsonEncoderOf[ComAdobeCqSocialDatastoreRdbImplSocialRDBResourceProviderFactorInfo]
}
