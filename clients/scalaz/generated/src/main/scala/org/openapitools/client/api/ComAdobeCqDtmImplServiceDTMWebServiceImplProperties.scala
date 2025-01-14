package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqDtmImplServiceDTMWebServiceImplProperties._

case class ComAdobeCqDtmImplServiceDTMWebServiceImplProperties (
  connectionTimeout: Option[ConfigNodePropertyInteger],
socketTimeout: Option[ConfigNodePropertyInteger])

object ComAdobeCqDtmImplServiceDTMWebServiceImplProperties {
  import DateTimeCodecs._

  implicit val ComAdobeCqDtmImplServiceDTMWebServiceImplPropertiesCodecJson: CodecJson[ComAdobeCqDtmImplServiceDTMWebServiceImplProperties] = CodecJson.derive[ComAdobeCqDtmImplServiceDTMWebServiceImplProperties]
  implicit val ComAdobeCqDtmImplServiceDTMWebServiceImplPropertiesDecoder: EntityDecoder[ComAdobeCqDtmImplServiceDTMWebServiceImplProperties] = jsonOf[ComAdobeCqDtmImplServiceDTMWebServiceImplProperties]
  implicit val ComAdobeCqDtmImplServiceDTMWebServiceImplPropertiesEncoder: EntityEncoder[ComAdobeCqDtmImplServiceDTMWebServiceImplProperties] = jsonEncoderOf[ComAdobeCqDtmImplServiceDTMWebServiceImplProperties]
}
