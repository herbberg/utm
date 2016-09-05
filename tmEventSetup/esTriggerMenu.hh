/**
 * @author      Takashi Matsushita
 * Created:     12 Mar 2015
 */

/** @file */
/** @todo nope */

#ifndef tmEventSetup_esTriggerMenu_hh
#define tmEventSetup_esTriggerMenu_hh

/*====================================================================*
 * declarations
 *====================================================================*/
/*-----------------------------------------------------------------*
 * headers
 *-----------------------------------------------------------------*/
#include <map>
#include <string>

#include "tmEventSetup/esScale.hh"
#include "tmEventSetup/esAlgorithm.hh"
#include "tmEventSetup/esCondition.hh"


/*-----------------------------------------------------------------*
 * constants
 *-----------------------------------------------------------------*/
/* nope */


namespace tmeventsetup
{
/**
 *  This class implements data structure for TriggerMenu
 */
class esTriggerMenu
{
  public:
    // ctor
    esTriggerMenu()
      : algorithm_map_(), condition_map_(), scale_map_(),
#if defined(SWIG)
        algorithm_map_p_(), condition_map_p_(), scale_map_p_(),
#endif
        external_map_(), token_to_condition_(), name_(), version_(), comment_(),
        datetime_(), uuid_firmware_(), scale_set_name_(), n_modules_(), version(0) { };

    // dtor
    virtual ~esTriggerMenu() { };

    /** get algorithm_map_
     *
     * @return reference of algorithm_map_
     */
    const std::map<std::string, esAlgorithm>& getAlgorithmMap() const { return algorithm_map_; };

    /** get condition_map_
     *
     * @return reference of condition_map_
     */
    const std::map<std::string, esCondition>& getConditionMap() const { return condition_map_; };

    /** get scale_map_
     *
     * @return reference of scale_map_
     */
    const std::map<std::string, esScale>& getScaleMap() const { return scale_map_; };

#if defined(SWIG)
    const std::map<std::string, tmeventsetup::esAlgorithm*>& getAlgorithmMapPtr() const { return algorithm_map_p_; };
    const std::map<std::string, tmeventsetup::esCondition*>& getConditionMapPtr() const { return condition_map_p_; };
    const std::map<std::string, tmeventsetup::esScale*>& getScaleMapPtr() const { return scale_map_p_; };
#endif

    /** get menu name
     *
     * @return name of the menu
     */
    const std::string& getName() const { return name_; };

    /** get grammar version
     *
     * @return grammar version
     */
    const std::string& getVersion() const { return version_; };

    /** get comment on the menu
     *
     * @return comment
     */
    const std::string& getComment() const { return comment_; };

    /** get datetime of the menu
     *
     * @return datetime
     */
    const std::string& getDatetime() const { return datetime_; };

    /** get UUID of firmware created by the menu
     *
     * @return UUID
     */
    const std::string& getFirmwareUuid() const { return uuid_firmware_; };

    /** get scale set name
     *
     * @return scale set name
     */
    const std::string& getScaleSetName() const { return scale_set_name_; };

    /** get number of uGT boards for the menu
     *
     * @return number of uGT boards
     */
    const unsigned int getNmodules() const { return n_modules_; };

    /** set menu name
     *
     * @param x [in] name of the menu
     */
    void setName(const std::string& x) { name_ = x; };

    /** set grammar version
     *
     * @param x [in] grammar version
     */
    void setVersion(const std::string& x) { version_ = x; };

    /** set comment on the menu
     *
     * @param x [in] comment
     */
    void setComment(const std::string& x) { comment_ = x; };

    /** set datetime of the menu
     *
     * @param x [in] datetime
     */
    void setDatetime(const std::string& x) { datetime_ = x; };

    /** set UUID of firmware created by the menu
     *
     * @param x [in] UUID
     */
    void setFirmwareUuid(const std::string& x) { uuid_firmware_ = x; };

    /** set scale set name
     *
     * @param x [in] scale set name
     */
    void setScaleSetName(const std::string& x) { scale_set_name_ = x; };

    /** set number of uGT boards for the menu
     *
     * @param x [in] number of uGT boards
     */
    void setNmodules(const unsigned int x) { n_modules_ = x; };

  protected:
    std::map<std::string, esAlgorithm> algorithm_map_;      /**< map of algorithm <algorithm name, esAlgorithm> */
    std::map<std::string, esCondition> condition_map_;      /**< map of condition <condition name, esCondition> */
    std::map<std::string, esScale> scale_map_;              /**< map of scale <scale name, esScale*> */
#if defined(SWIG)
    std::map<std::string, esAlgorithm*> algorithm_map_p_;
    std::map<std::string, esCondition*> condition_map_p_;
    std::map<std::string, esScale*> scale_map_p_;
#endif
    std::map<std::string, unsigned int> external_map_;      /**< map of external <external name, channel id> */
    std::map<std::string, std::string> token_to_condition_; /**< look-up table for translating expression in grammar to expression in condition */
    std::string name_;                                      /**< name of the menu */
    std::string version_;                                   /**< menu grammar version */
    std::string comment_;                                   /**< comment on the menu */
    std::string datetime_;                                  /**< datetime of the menu */
    std::string uuid_firmware_;                             /**< uuid of firmware */
    std::string scale_set_name_;                            /**< scale set name */
    unsigned int n_modules_;                                /**< number of uGT boards for the menu */
    unsigned int version;
};

} // namespace tmeventsetup
#endif // tmEventSetup_esTriggerMenu_hh
/* eof */
